#include <wx/wx.h>
#include <wx/init.h>
#include <wx/string.h>
#include <wx/msw/registry.h>
//#include <wx/stream.h>
//#include <wx/sstream.h>
#include <ctb-0.16/ctb.h>


static bool getReg();
//static bool UsingRegistryWxArrayString(wxArrayString ports);
//static bool UsingRegistry(std::vector<std::wstring>& ports);
//static bool RegQueryValueString(HKEY kKey, LPCTSTR lpValueName, LPTSTR& pszValue);
//static bool QueryRegistryPortName(HKEY hDeviceKey, int& nPort);
//static HMODULE LoadLibraryFromSystem32(LPCTSTR lpFileName);
//static bool IsNumeric(LPCSTR pszString, bool bIgnoreColon);
//static bool IsNumeric(LPCWSTR pszString, bool bIgnoreColon);

//std::vector<std::wstring> friendlyNames;
int main( int argc, char** argv )
{
    // initialize wxWidgets
    wxInitializer init;
    wxPrintf(wxT("Enumerating Serial Comm Ports\n\n"));
    //std::vector<std::wstring> sPorts;
    wxArrayString   sPorts;
    if(getReg())
    {
        wxPrintf("\nOk\n");
    }
/*
    if(UsingRegistryWxArrayString(sPorts))
    {
        for(int i = 0; i < sPorts.size(); i++)
        {
            wxPrintf("%s\n", sPorts[i].c_str());
        }
    }
*/
    return 0;
}

#ifdef __WXMSW__

bool getReg()
{
    //wxRegKey *key = new wxRegKey("HKEY_LOCAL_MACHINE\\HARDWARE\\DEVICEMAP\\SERIALCOMM");
    wxRegKey key(wxRegKey::HKLM, _T("HARDWARE\\DEVICEMAP\\SERIALCOMM"));
    if(!key.Exists())
    {
        wxPrintf("Key doesn't exist: %s\n", key.GetName());
        return false;
    }
    else
    {
        // Get the number of subkeys and enumerate them.
        if(!key.Open(wxRegKey::Read))
        {
            wxPrintf("Unable to open key: %s\n", key.GetName());
            return false;
        }    
        size_t subkeys;
        size_t values;
        if(!key.GetKeyInfo(&subkeys, NULL, &values, NULL))
        {
            wxPrintf("Unable get subkey info: %s\n", key.GetName());
            return false;
        }
        if(!key.HasValues())
        {
            wxPrintf("Key does have values: %s\n", key.GetName());
            return false;
        }
        wxString key_name;
        long el = 1;
        key.GetFirstValue(key_name, el);
        wxString valType;
        wxString key_data;
        for(unsigned int i = 0; i < values; i++)
        {
            key.QueryValue(key_name, key_data);
            wxPrintf("Value:  %s Data: %s\n", key_name, key_data);
            //wxPrintf("Data:  %s\n", key_data);
            key.GetNextValue(key_name, el);
        }
    }
    return true;
}
 
bool UsingRegistry(std::vector<std::wstring>& ports)
{
    //Make sure we clear out any elements which may already be in the array(s)
    ports.clear();
    //What will be the return value from this function (assume the worst)
    BOOL bSuccess = FALSE;

    HKEY hSERIALCOMM;
    if(::RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("HARDWARE\\DEVICEMAP\\SERIALCOMM"), 0, KEY_QUERY_VALUE, &hSERIALCOMM) == ERROR_SUCCESS)
    {
        //Get the max value name and max value lengths
        DWORD dwMaxValueNameLen;
        DWORD dwMaxValueLen;
        DWORD dwQueryInfo = ::RegQueryInfoKey(hSERIALCOMM, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &dwMaxValueNameLen, &dwMaxValueLen, NULL, NULL);
        if(dwQueryInfo == ERROR_SUCCESS)
        {
            DWORD dwMaxValueNameSizeInChars = dwMaxValueNameLen + 1;            //Include space for the NULL terminator
            DWORD dwMaxValueNameSizeInBytes = dwMaxValueNameSizeInChars * sizeof(TCHAR);
            DWORD dwMaxValueDataSizeInChars = dwMaxValueLen/sizeof(TCHAR) + 1;  //Include space for the NULL terminator
            DWORD dwMaxValueDataSizeInBytes = dwMaxValueDataSizeInChars * sizeof(TCHAR);
            wxWCharBuffer *szValueName   = new wxWCharBuffer(dwMaxValueNameSizeInBytes);
            wxWCharBuffer *byValue       = new wxWCharBuffer(dwMaxValueDataSizeInBytes);
            bSuccess = TRUE;

            //Enumerate all the values underneath HKEY_LOCAL_MACHINE\HARDWARE\DEVICEMAP\SERIALCOMM
            DWORD dwIndex = 0;
            DWORD dwType;
            DWORD dwValueNameSize   = dwMaxValueNameSizeInChars;
            DWORD dwDataSize        = dwMaxValueDataSizeInBytes;
            LONG nEnum = ::RegEnumValue(hSERIALCOMM, dwIndex,  (wchar_t *) szValueName, &dwValueNameSize, NULL, &dwType, (LPBYTE) byValue, &dwDataSize);
            
            while(nEnum == ERROR_SUCCESS)
            {
                //If the value is of the correct type, then add it to the array
                if(dwType == REG_SZ)
                {
                    //TCHAR* szPort = reinterpret_cast<TCHAR*>(byValue.m_pData);
                    TCHAR *szPort;
                    szPort = (TCHAR *)byValue;
                    ports.push_back(szPort);
                }
                //Prepare for the next time around
                dwValueNameSize = dwMaxValueNameSizeInChars;
                dwDataSize      = dwMaxValueDataSizeInBytes;
                ++dwIndex;
                nEnum = ::RegEnumValue(hSERIALCOMM, dwIndex, (wchar_t *) szValueName, &dwValueNameSize, NULL, &dwType, (LPBYTE) byValue, &dwDataSize);
            }
        }
        //Close the registry key now that we are finished with it    
        ::RegCloseKey(hSERIALCOMM);
        if(dwQueryInfo != ERROR_SUCCESS)
        {
            ::SetLastError(dwQueryInfo);
        }
    }
    return bSuccess;
}

bool UsingRegistryWxArrayString(wxArrayString ports)
{
    //Make sure we clear out any elements which may already be in the array(s)
    ports.clear();
    //What will be the return value from this function (assume the worst)
    BOOL bSuccess = FALSE;

    HKEY hSERIALCOMM;
    if(::RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("HARDWARE\\DEVICEMAP\\SERIALCOMM"), 0, KEY_QUERY_VALUE, &hSERIALCOMM) == ERROR_SUCCESS)
    {
        //Get the max value name and max value lengths
        DWORD dwMaxValueNameLen;
        DWORD dwMaxValueLen;
        DWORD dwQueryInfo = ::RegQueryInfoKey(hSERIALCOMM, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &dwMaxValueNameLen, &dwMaxValueLen, NULL, NULL);
        if(dwQueryInfo == ERROR_SUCCESS)
        {
            DWORD dwMaxNameSizeInChars = dwMaxValueNameLen + 1;            //Include space for the NULL terminator
            DWORD dwMaxNameSizeInBytes = dwMaxNameSizeInChars * sizeof(TCHAR);
            DWORD dwMaxDataSizeInChars = dwMaxValueLen/sizeof(TCHAR) + 1;  //Include space for the NULL terminator
            DWORD dwMaxDataSizeInBytes = dwMaxDataSizeInChars * sizeof(TCHAR);
            wxWCharBuffer *szValueName   = new wxWCharBuffer(dwMaxNameSizeInBytes);
            wxWCharBuffer *byValue       = new wxWCharBuffer(dwMaxDataSizeInBytes);

            bSuccess = TRUE;

            //Enumerate all the values underneath HKEY_LOCAL_MACHINE\HARDWARE\DEVICEMAP\SERIALCOMM
            DWORD dwIndex = 0;
            DWORD dwType;
            DWORD dwValueNameSize = dwMaxNameSizeInChars;
            DWORD dwDataSize      = dwMaxDataSizeInBytes;
            LONG nEnum = ::RegEnumValue(hSERIALCOMM, dwIndex,  (wchar_t *)&szValueName, &dwValueNameSize, NULL, &dwType, (LPBYTE) byValue, &dwDataSize);
            wxString szPort;
            
            while(nEnum == ERROR_SUCCESS)
            {
                //If the value is of the correct type, then add it to the array
                if(dwType == REG_SZ)
                {
                    szPort = wxString((LPBYTE)byValue);
                    ports.push_back(szPort);
                }
                //Prepare for the next time around
                dwValueNameSize = dwMaxNameSizeInChars;
                dwDataSize      = dwMaxDataSizeInBytes;
                ++dwIndex;
                nEnum = ::RegEnumValue(hSERIALCOMM, dwIndex, (wchar_t *) &szValueName, &dwValueNameSize, NULL, &dwType, (LPBYTE) byValue, &dwDataSize);
            }
        }
        //Close the registry key now that we are finished with it    
        ::RegCloseKey(hSERIALCOMM);
        if (dwQueryInfo != ERROR_SUCCESS)
        {
            ::SetLastError(dwQueryInfo);
        }
    }
    return bSuccess;
}

#endif //__WXMSW__
