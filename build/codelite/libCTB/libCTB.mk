##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=libCTB
ConfigurationName      :=Debug
WorkspacePath          := "D:\Projects\Radio\fdmdv2\build\codelite"
ProjectPath            := "D:\Projects\Radio\fdmdv2\build\codelite\libCTB"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=wittend
Date                   :=12/30/2012
CodeLitePath           :="D:\bin\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/lib$(ProjectName).a
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="D:\Projects\Radio\fdmdv2\build\codelite\libCTB\libCTB.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g  -DSVN_REVISION=\"1152\"  $(Preprocessors)
CFLAGS   :=  -g  -DSVN_REVISION=\"1152\"  $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=D:\bin\CodeLite
WXWIN:=D:\bin\wxWidgets-2.9.4
PATH:=$(WXWIN)\lib\gcc_dll;$(PATH)
WXCFG:=gcc_dll\mswu
UNIT_TEST_PP_SRC_DIR:=D:\bin\UnitTest++-1.3
Objects=$(IntermediateDirectory)/src_fifo$(ObjectSuffix) $(IntermediateDirectory)/src_getopt$(ObjectSuffix) $(IntermediateDirectory)/src_gpib$(ObjectSuffix) $(IntermediateDirectory)/src_iobase$(ObjectSuffix) $(IntermediateDirectory)/src_kbhit$(ObjectSuffix) $(IntermediateDirectory)/src_portscan$(ObjectSuffix) $(IntermediateDirectory)/src_serportx$(ObjectSuffix) $(IntermediateDirectory)/win32_getopt$(ObjectSuffix) $(IntermediateDirectory)/win32_serport$(ObjectSuffix) $(IntermediateDirectory)/win32_timer$(ObjectSuffix) \
	

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(IntermediateDirectory) $(OutputFile)

$(OutputFile): $(Objects)
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects) > $(ObjectsFileList)
	$(AR) $(ArchiveOutputSwitch)$(OutputFile) @$(ObjectsFileList) $(ArLibs)
	@$(MakeDirCommand) "D:\Projects\Radio\fdmdv2\build\codelite\.build-debug"
	@echo rebuilt > "D:\Projects\Radio\fdmdv2\build\codelite\.build-debug\libCTB"

./Debug:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_fifo$(ObjectSuffix): ../../../../code/libCTB-0.16/src/fifo.cpp $(IntermediateDirectory)/src_fifo$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/fifo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fifo$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fifo$(DependSuffix): ../../../../code/libCTB-0.16/src/fifo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fifo$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fifo$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/fifo.cpp"

$(IntermediateDirectory)/src_fifo$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/fifo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fifo$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/fifo.cpp"

$(IntermediateDirectory)/src_getopt$(ObjectSuffix): ../../../../code/libCTB-0.16/src/getopt.cpp $(IntermediateDirectory)/src_getopt$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/getopt.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_getopt$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_getopt$(DependSuffix): ../../../../code/libCTB-0.16/src/getopt.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_getopt$(ObjectSuffix) -MF$(IntermediateDirectory)/src_getopt$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/getopt.cpp"

$(IntermediateDirectory)/src_getopt$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/getopt.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_getopt$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/getopt.cpp"

$(IntermediateDirectory)/src_gpib$(ObjectSuffix): ../../../../code/libCTB-0.16/src/gpib.cpp $(IntermediateDirectory)/src_gpib$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/gpib.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_gpib$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_gpib$(DependSuffix): ../../../../code/libCTB-0.16/src/gpib.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_gpib$(ObjectSuffix) -MF$(IntermediateDirectory)/src_gpib$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/gpib.cpp"

$(IntermediateDirectory)/src_gpib$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/gpib.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_gpib$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/gpib.cpp"

$(IntermediateDirectory)/src_iobase$(ObjectSuffix): ../../../../code/libCTB-0.16/src/iobase.cpp $(IntermediateDirectory)/src_iobase$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/iobase.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_iobase$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_iobase$(DependSuffix): ../../../../code/libCTB-0.16/src/iobase.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_iobase$(ObjectSuffix) -MF$(IntermediateDirectory)/src_iobase$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/iobase.cpp"

$(IntermediateDirectory)/src_iobase$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/iobase.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_iobase$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/iobase.cpp"

$(IntermediateDirectory)/src_kbhit$(ObjectSuffix): ../../../../code/libCTB-0.16/src/kbhit.cpp $(IntermediateDirectory)/src_kbhit$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/kbhit.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_kbhit$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_kbhit$(DependSuffix): ../../../../code/libCTB-0.16/src/kbhit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_kbhit$(ObjectSuffix) -MF$(IntermediateDirectory)/src_kbhit$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/kbhit.cpp"

$(IntermediateDirectory)/src_kbhit$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/kbhit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_kbhit$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/kbhit.cpp"

$(IntermediateDirectory)/src_portscan$(ObjectSuffix): ../../../../code/libCTB-0.16/src/portscan.cpp $(IntermediateDirectory)/src_portscan$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/portscan.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_portscan$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_portscan$(DependSuffix): ../../../../code/libCTB-0.16/src/portscan.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_portscan$(ObjectSuffix) -MF$(IntermediateDirectory)/src_portscan$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/portscan.cpp"

$(IntermediateDirectory)/src_portscan$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/portscan.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_portscan$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/portscan.cpp"

$(IntermediateDirectory)/src_serportx$(ObjectSuffix): ../../../../code/libCTB-0.16/src/serportx.cpp $(IntermediateDirectory)/src_serportx$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/serportx.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_serportx$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_serportx$(DependSuffix): ../../../../code/libCTB-0.16/src/serportx.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_serportx$(ObjectSuffix) -MF$(IntermediateDirectory)/src_serportx$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/serportx.cpp"

$(IntermediateDirectory)/src_serportx$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/serportx.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_serportx$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/serportx.cpp"

$(IntermediateDirectory)/win32_getopt$(ObjectSuffix): ../../../../code/libCTB-0.16/src/win32/getopt.cpp $(IntermediateDirectory)/win32_getopt$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/win32/getopt.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/win32_getopt$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/win32_getopt$(DependSuffix): ../../../../code/libCTB-0.16/src/win32/getopt.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/win32_getopt$(ObjectSuffix) -MF$(IntermediateDirectory)/win32_getopt$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/win32/getopt.cpp"

$(IntermediateDirectory)/win32_getopt$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/win32/getopt.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/win32_getopt$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/win32/getopt.cpp"

$(IntermediateDirectory)/win32_serport$(ObjectSuffix): ../../../../code/libCTB-0.16/src/win32/serport.cpp $(IntermediateDirectory)/win32_serport$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/win32/serport.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/win32_serport$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/win32_serport$(DependSuffix): ../../../../code/libCTB-0.16/src/win32/serport.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/win32_serport$(ObjectSuffix) -MF$(IntermediateDirectory)/win32_serport$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/win32/serport.cpp"

$(IntermediateDirectory)/win32_serport$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/win32/serport.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/win32_serport$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/win32/serport.cpp"

$(IntermediateDirectory)/win32_timer$(ObjectSuffix): ../../../../code/libCTB-0.16/src/win32/timer.cpp $(IntermediateDirectory)/win32_timer$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/code/libCTB-0.16/src/win32/timer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/win32_timer$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/win32_timer$(DependSuffix): ../../../../code/libCTB-0.16/src/win32/timer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/win32_timer$(ObjectSuffix) -MF$(IntermediateDirectory)/win32_timer$(DependSuffix) -MM "D:/Projects/Radio/code/libCTB-0.16/src/win32/timer.cpp"

$(IntermediateDirectory)/win32_timer$(PreprocessSuffix): ../../../../code/libCTB-0.16/src/win32/timer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/win32_timer$(PreprocessSuffix) "D:/Projects/Radio/code/libCTB-0.16/src/win32/timer.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/src_fifo$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fifo$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fifo$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_getopt$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_getopt$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_getopt$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_gpib$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_gpib$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_gpib$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_iobase$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_iobase$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_iobase$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_kbhit$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_kbhit$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_kbhit$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_portscan$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_portscan$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_portscan$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_serportx$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_serportx$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_serportx$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/win32_getopt$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/win32_getopt$(DependSuffix)
	$(RM) $(IntermediateDirectory)/win32_getopt$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/win32_serport$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/win32_serport$(DependSuffix)
	$(RM) $(IntermediateDirectory)/win32_serport$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/win32_timer$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/win32_timer$(DependSuffix)
	$(RM) $(IntermediateDirectory)/win32_timer$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile)
	$(RM) "D:\Projects\Radio\fdmdv2\build\codelite\.build-debug\libCTB"


