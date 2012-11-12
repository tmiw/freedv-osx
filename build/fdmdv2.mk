##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=fdmdv2
ConfigurationName      :=Release
WorkspacePath          := "C:\bin\Projects\Radio\fdmdv2\build"
ProjectPath            := "C:\bin\Projects\Radio\fdmdv2\build"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=OFA-Staff
Date                   :=11/9/2012
CodeLitePath           :="C:\bin\CodeLite"
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)__WX__ 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="C:\bin\Projects\Radio\fdmdv2\build\fdmdv2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := $(shell wx-config --rcflags)
RcCompilerName         :=windres
LinkOptions            :=  -mwindows -s $(shell wx-config --debug=no --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)/bin/MinGW-4.6.1/msys/1.0/local/include $(IncludeSwitch)../../codec2-dev/src $(IncludeSwitch)/bin/Projects/Audio/libsndfile/ 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)sndfile-1 $(LibrarySwitch)codec2 $(LibrarySwitch)portaudio $(LibrarySwitch)portaudiocpp $(LibrarySwitch)samplerate.dll 
ArLibs                 :=  "libsndfile-1.dll" "codec2" "libportaudio.a" "libportaudiocpp.a" "libsamplerate.dll.a" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/bin/Projects/Radio/codec2-dev/src/.libs $(LibraryPathSwitch)/bin/MinGW-4.6.1/msys/1.0/local/lib $(LibraryPathSwitch)/bin/Projects/Audio/libsndfile/lib 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no)  -DSVN_REVISION=\"955\"  $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no)  -DSVN_REVISION=\"955\"  $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=C:\bin\CodeLite
WXWIN:=C:\bin\wxWidgets-2.9.4
PATH:=$(WXWIN)\lib\gcc_dll;$(PATH)
WXCFG:=gcc_dll\mswu
UNIT_TEST_PP_SRC_DIR:=C:\bin\UnitTest++-1.3
Objects=$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_options$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) $(IntermediateDirectory)/src_topFrame$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) \
	$(IntermediateDirectory)/src_fdmdv2_hdw_ports$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects) > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix): ../src/dlg_about.cpp $(IntermediateDirectory)/src_dlg_about$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_about.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_about$(DependSuffix): ../src/dlg_about.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_about$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_about.cpp"

$(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix): ../src/dlg_about.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_about.cpp"

$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix): ../src/dlg_comports.cpp $(IntermediateDirectory)/src_dlg_comports$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_comports.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_comports$(DependSuffix): ../src/dlg_comports.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_comports$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_comports.cpp"

$(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix): ../src/dlg_comports.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_comports.cpp"

$(IntermediateDirectory)/src_dlg_options$(ObjectSuffix): ../src/dlg_options.cpp $(IntermediateDirectory)/src_dlg_options$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_options.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_options$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_options$(DependSuffix): ../src/dlg_options.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_options$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_options$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_options.cpp"

$(IntermediateDirectory)/src_dlg_options$(PreprocessSuffix): ../src/dlg_options.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_options$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_options.cpp"

$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix): ../src/fdmdv2_main.cpp $(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix): ../src/fdmdv2_main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_main.cpp"

$(IntermediateDirectory)/src_fdmdv2_main$(PreprocessSuffix): ../src/fdmdv2_main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_main$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_main.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix): ../src/fdmdv2_plot.cpp $(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix): ../src/fdmdv2_plot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot$(PreprocessSuffix): ../src/fdmdv2_plot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot.cpp"

$(IntermediateDirectory)/src_topFrame$(ObjectSuffix): ../src/topFrame.cpp $(IntermediateDirectory)/src_topFrame$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/topFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_topFrame$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_topFrame$(DependSuffix): ../src/topFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_topFrame$(ObjectSuffix) -MF$(IntermediateDirectory)/src_topFrame$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/topFrame.cpp"

$(IntermediateDirectory)/src_topFrame$(PreprocessSuffix): ../src/topFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_topFrame$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/topFrame.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix): ../src/fdmdv2_plot_scatter.cpp $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scatter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix): ../src/fdmdv2_plot_scatter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scatter.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(PreprocessSuffix): ../src/fdmdv2_plot_scatter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scatter.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix): ../src/fdmdv2_plot_spectrum.cpp $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_spectrum.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix): ../src/fdmdv2_plot_spectrum.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_spectrum.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix): ../src/fdmdv2_plot_spectrum.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_spectrum.cpp"

$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix): ../src/fdmdv2_pa_wrapper.cpp $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_pa_wrapper.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix): ../src/fdmdv2_pa_wrapper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_pa_wrapper.cpp"

$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix): ../src/fdmdv2_pa_wrapper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_pa_wrapper.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix): ../src/fdmdv2_plot_scalar.cpp $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scalar.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix): ../src/fdmdv2_plot_scalar.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scalar.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix): ../src/fdmdv2_plot_scalar.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scalar.cpp"

$(IntermediateDirectory)/src_fdmdv2_hdw_ports$(ObjectSuffix): ../src/fdmdv2_hdw_ports.cpp $(IntermediateDirectory)/src_fdmdv2_hdw_ports$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_hdw_ports.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_hdw_ports$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_hdw_ports$(DependSuffix): ../src/fdmdv2_hdw_ports.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_hdw_ports$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_hdw_ports$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_hdw_ports.cpp"

$(IntermediateDirectory)/src_fdmdv2_hdw_ports$(PreprocessSuffix): ../src/fdmdv2_hdw_ports.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_hdw_ports$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_hdw_ports.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix): ../src/fdmdv2_plot_waterfall_linux.cpp $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_waterfall_linux.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix): ../src/fdmdv2_plot_waterfall_linux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_waterfall_linux.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(PreprocessSuffix): ../src/fdmdv2_plot_waterfall_linux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_waterfall_linux.cpp"

$(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix): ../src/dlg_audiooptions.cpp $(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_audiooptions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix): ../src/dlg_audiooptions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_audiooptions.cpp"

$(IntermediateDirectory)/src_dlg_audiooptions$(PreprocessSuffix): ../src/dlg_audiooptions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_audiooptions$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_audiooptions.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/src_dlg_about$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_about$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_comports$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_options$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_options$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_options$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_topFrame$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_topFrame$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_topFrame$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_hdw_ports$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_hdw_ports$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_hdw_ports$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audiooptions$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "C:\bin\Projects\Radio\fdmdv2\build\.build-release\fdmdv2"


