##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=fdmdv2
ConfigurationName      :=Debug
WorkspacePath          := "D:\Projects\Radio\fdmdv2\build\codelite"
ProjectPath            := "D:\Projects\Radio\fdmdv2\build\codelite"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=wittend
Date                   :=5/6/2013
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
OutputFile             :=$(IntermediateDirectory)/freeDV
Preprocessors          :=$(PreprocessorSwitch)__WX__ $(PreprocessorSwitch)_NO_AUTOTOOLS_=1 $(PreprocessorSwitch)DMW=1 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="fdmdv2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := $(shell wx-config --rcflags)
RcCompilerName         :=windres
LinkOptions            :=  -mwindows $(shell wx-config --debug=yes --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)/bin/MinGW-4.7.1/msys/1.0/local/include $(IncludeSwitch)../../../codec2-dev/src $(IncludeSwitch)/bin/Projects/Audio/libsndfile/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)sndfile-1 $(LibrarySwitch)codec2 $(LibrarySwitch)portaudio $(LibrarySwitch)portaudiocpp $(LibrarySwitch)samplerate.dll $(LibrarySwitch)ctb-0.16 $(LibrarySwitch)sox 
ArLibs                 :=  "libsndfile-1.dll" "codec2" "libportaudio.a" "libportaudiocpp.a" "libsamplerate.dll.a" "libctb-0.16.a" "libsox" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)d:/Projects/Radio/codec2-dev/src/.libs $(LibraryPathSwitch)d:/bin/MinGW-4.7.1/msys/1.0/local/lib 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=yes)  -DSVN_REVISION=\"1237\"  $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=yes)  -DSVN_REVISION=\"1237\"  $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=D:\bin\CodeLite
WXWIN:=D:\bin\wxWidgets-2.9.4
PATH:=$(WXWIN)\lib\gcc_dll;$(PATH)
WXCFG:=gcc_dll\mswu
UNIT_TEST_PP_SRC_DIR:=D:\bin\UnitTest++1.3
Objects0=$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) $(IntermediateDirectory)/src_topFrame$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix) \
	$(IntermediateDirectory)/src_dlg_filter$(ObjectSuffix) $(IntermediateDirectory)/src_varicode$(ObjectSuffix) $(IntermediateDirectory)/src_sox_biquad$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) $(IntermediateDirectory)/src_golay23$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix): ../../src/dlg_comports.cpp $(IntermediateDirectory)/src_dlg_comports$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/dlg_comports.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_comports$(DependSuffix): ../../src/dlg_comports.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_comports$(DependSuffix) -MM "../../src/dlg_comports.cpp"

$(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix): ../../src/dlg_comports.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix) "../../src/dlg_comports.cpp"

$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix): ../../src/fdmdv2_main.cpp $(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/fdmdv2_main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix): ../../src/fdmdv2_main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix) -MM "../../src/fdmdv2_main.cpp"

$(IntermediateDirectory)/src_fdmdv2_main$(PreprocessSuffix): ../../src/fdmdv2_main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_main$(PreprocessSuffix) "../../src/fdmdv2_main.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix): ../../src/fdmdv2_plot.cpp $(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/fdmdv2_plot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix): ../../src/fdmdv2_plot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix) -MM "../../src/fdmdv2_plot.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot$(PreprocessSuffix): ../../src/fdmdv2_plot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot$(PreprocessSuffix) "../../src/fdmdv2_plot.cpp"

$(IntermediateDirectory)/src_topFrame$(ObjectSuffix): ../../src/topFrame.cpp $(IntermediateDirectory)/src_topFrame$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/topFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_topFrame$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_topFrame$(DependSuffix): ../../src/topFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_topFrame$(ObjectSuffix) -MF$(IntermediateDirectory)/src_topFrame$(DependSuffix) -MM "../../src/topFrame.cpp"

$(IntermediateDirectory)/src_topFrame$(PreprocessSuffix): ../../src/topFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_topFrame$(PreprocessSuffix) "../../src/topFrame.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix): ../../src/fdmdv2_plot_scatter.cpp $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/fdmdv2_plot_scatter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix): ../../src/fdmdv2_plot_scatter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix) -MM "../../src/fdmdv2_plot_scatter.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(PreprocessSuffix): ../../src/fdmdv2_plot_scatter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(PreprocessSuffix) "../../src/fdmdv2_plot_scatter.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix): ../../src/fdmdv2_plot_spectrum.cpp $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/fdmdv2_plot_spectrum.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix): ../../src/fdmdv2_plot_spectrum.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix) -MM "../../src/fdmdv2_plot_spectrum.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix): ../../src/fdmdv2_plot_spectrum.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix) "../../src/fdmdv2_plot_spectrum.cpp"

$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix): ../../src/fdmdv2_pa_wrapper.cpp $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/fdmdv2_pa_wrapper.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix): ../../src/fdmdv2_pa_wrapper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix) -MM "../../src/fdmdv2_pa_wrapper.cpp"

$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix): ../../src/fdmdv2_pa_wrapper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix) "../../src/fdmdv2_pa_wrapper.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix): ../../src/fdmdv2_plot_scalar.cpp $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/fdmdv2_plot_scalar.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix): ../../src/fdmdv2_plot_scalar.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix) -MM "../../src/fdmdv2_plot_scalar.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix): ../../src/fdmdv2_plot_scalar.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix) "../../src/fdmdv2_plot_scalar.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix): ../../src/fdmdv2_plot_waterfall_linux.cpp $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/fdmdv2_plot_waterfall_linux.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix): ../../src/fdmdv2_plot_waterfall_linux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix) -MM "../../src/fdmdv2_plot_waterfall_linux.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(PreprocessSuffix): ../../src/fdmdv2_plot_waterfall_linux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(PreprocessSuffix) "../../src/fdmdv2_plot_waterfall_linux.cpp"

$(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix): ../../src/dlg_audiooptions.cpp $(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/dlg_audiooptions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix): ../../src/dlg_audiooptions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix) -MM "../../src/dlg_audiooptions.cpp"

$(IntermediateDirectory)/src_dlg_audiooptions$(PreprocessSuffix): ../../src/dlg_audiooptions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_audiooptions$(PreprocessSuffix) "../../src/dlg_audiooptions.cpp"

$(IntermediateDirectory)/src_dlg_filter$(ObjectSuffix): ../../src/dlg_filter.cpp $(IntermediateDirectory)/src_dlg_filter$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/dlg_filter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_filter$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_filter$(DependSuffix): ../../src/dlg_filter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_filter$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_filter$(DependSuffix) -MM "../../src/dlg_filter.cpp"

$(IntermediateDirectory)/src_dlg_filter$(PreprocessSuffix): ../../src/dlg_filter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_filter$(PreprocessSuffix) "../../src/dlg_filter.cpp"

$(IntermediateDirectory)/src_varicode$(ObjectSuffix): ../../src/varicode.c $(IntermediateDirectory)/src_varicode$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/varicode.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_varicode$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_varicode$(DependSuffix): ../../src/varicode.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_varicode$(ObjectSuffix) -MF$(IntermediateDirectory)/src_varicode$(DependSuffix) -MM "../../src/varicode.c"

$(IntermediateDirectory)/src_varicode$(PreprocessSuffix): ../../src/varicode.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_varicode$(PreprocessSuffix) "../../src/varicode.c"

$(IntermediateDirectory)/src_sox_biquad$(ObjectSuffix): ../../src/sox_biquad.c $(IntermediateDirectory)/src_sox_biquad$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/sox_biquad.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sox_biquad$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sox_biquad$(DependSuffix): ../../src/sox_biquad.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sox_biquad$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sox_biquad$(DependSuffix) -MM "../../src/sox_biquad.c"

$(IntermediateDirectory)/src_sox_biquad$(PreprocessSuffix): ../../src/sox_biquad.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sox_biquad$(PreprocessSuffix) "../../src/sox_biquad.c"

$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix): ../../src/dlg_about.cpp $(IntermediateDirectory)/src_dlg_about$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/src/dlg_about.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_about$(DependSuffix): ../../src/dlg_about.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_about$(DependSuffix) -MM "../../src/dlg_about.cpp"

$(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix): ../../src/dlg_about.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix) "../../src/dlg_about.cpp"

$(IntermediateDirectory)/src_golay23$(ObjectSuffix): ../../../codec2-dev/src/golay23.c $(IntermediateDirectory)/src_golay23$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Projects/Radio/codec2-dev/src/golay23.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_golay23$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_golay23$(DependSuffix): ../../../codec2-dev/src/golay23.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_golay23$(ObjectSuffix) -MF$(IntermediateDirectory)/src_golay23$(DependSuffix) -MM "../../../codec2-dev/src/golay23.c"

$(IntermediateDirectory)/src_golay23$(PreprocessSuffix): ../../../codec2-dev/src/golay23.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_golay23$(PreprocessSuffix) "../../../codec2-dev/src/golay23.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_comports$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix)
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
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall_linux$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audiooptions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audiooptions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audiooptions$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_filter$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_filter$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_filter$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_varicode$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_varicode$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_varicode$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_sox_biquad$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_sox_biquad$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_sox_biquad$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_about$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_about$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_golay23$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_golay23$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_golay23$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) ".build-debug/fdmdv2"


