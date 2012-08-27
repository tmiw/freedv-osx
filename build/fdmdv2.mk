##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=fdmdv2
ConfigurationName      :=Release
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
WorkspacePath          := "C:\bin\Projects\Radio\fdmdv2\build"
ProjectPath            := "C:\bin\Projects\Radio\fdmdv2\build"
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=OFA-Staff
Date                   :=8/27/2012
CodeLitePath           :="C:\bin\CodeLite"
LinkerName             :=g++
ArchiveTool            :=ar rcus
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
CompilerName           :=g++
C_CompilerName         :=gcc
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)__WX__ 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="C:\bin\Projects\Radio\fdmdv2\build\fdmdv2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
CmpOptions             := -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no) $(Preprocessors)
C_CmpOptions           := -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no) $(Preprocessors)
LinkOptions            :=  -mwindows -s $(shell wx-config --debug=no --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)/bin/MinGW/msys/1.0/local/include $(IncludeSwitch)../../codec2-dev/src $(IncludeSwitch)../3rdparty/portaudio/include $(IncludeSwitch)../3rdparty/portaudio/bindings/cpp/include $(IncludeSwitch)../3rdparty/libsndfile/include $(IncludeSwitch)../3rdparty/libsamplerate-0.1.8/src 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)sndfile-1 $(LibrarySwitch)codec2 $(LibrarySwitch)portaudio $(LibrarySwitch)portaudiocpp 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/bin/MinGW/msys/1.0/local/lib $(LibraryPathSwitch)../extern/lib 


##
## User defined environment variables
##
CodeLiteDir:=C:\bin\CodeLite
WXWIN:=C:\bin\wxWidgets-2.9.4
PATH:=$(WXWIN)\lib\gcc_dll;$(PATH)
WXCFG:=gcc_dll\mswu
UNIT_TEST_PP_SRC_DIR:=C:\bin\UnitTest++-1.3
Objects=$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_audio$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) $(IntermediateDirectory)/src_dlg_options$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) $(IntermediateDirectory)/src_topFrame$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) \
	$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_process_audio$(ObjectSuffix) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) 

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
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_about.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_about$(DependSuffix): ../src/dlg_about.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_about$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_about$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_about.cpp"

$(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix): ../src/dlg_about.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_about.cpp"

$(IntermediateDirectory)/src_dlg_audio$(ObjectSuffix): ../src/dlg_audio.cpp $(IntermediateDirectory)/src_dlg_audio$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_audio.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_audio$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_audio$(DependSuffix): ../src/dlg_audio.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_audio$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_audio$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_audio.cpp"

$(IntermediateDirectory)/src_dlg_audio$(PreprocessSuffix): ../src/dlg_audio.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_audio$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_audio.cpp"

$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix): ../src/dlg_comports.cpp $(IntermediateDirectory)/src_dlg_comports$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_comports.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_comports$(DependSuffix): ../src/dlg_comports.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_comports$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_comports$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_comports.cpp"

$(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix): ../src/dlg_comports.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_comports$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_comports.cpp"

$(IntermediateDirectory)/src_dlg_options$(ObjectSuffix): ../src/dlg_options.cpp $(IntermediateDirectory)/src_dlg_options$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/dlg_options.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_dlg_options$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_dlg_options$(DependSuffix): ../src/dlg_options.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_dlg_options$(ObjectSuffix) -MF$(IntermediateDirectory)/src_dlg_options$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/dlg_options.cpp"

$(IntermediateDirectory)/src_dlg_options$(PreprocessSuffix): ../src/dlg_options.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_dlg_options$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/dlg_options.cpp"

$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix): ../src/fdmdv2_main.cpp $(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_main.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix): ../src/fdmdv2_main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_main$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_main$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_main.cpp"

$(IntermediateDirectory)/src_fdmdv2_main$(PreprocessSuffix): ../src/fdmdv2_main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_main$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_main.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix): ../src/fdmdv2_plot.cpp $(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix): ../src/fdmdv2_plot.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot$(PreprocessSuffix): ../src/fdmdv2_plot.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot.cpp"

$(IntermediateDirectory)/src_topFrame$(ObjectSuffix): ../src/topFrame.cpp $(IntermediateDirectory)/src_topFrame$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/topFrame.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_topFrame$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_topFrame$(DependSuffix): ../src/topFrame.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_topFrame$(ObjectSuffix) -MF$(IntermediateDirectory)/src_topFrame$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/topFrame.cpp"

$(IntermediateDirectory)/src_topFrame$(PreprocessSuffix): ../src/topFrame.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_topFrame$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/topFrame.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix): ../src/fdmdv2_plot_scatter.cpp $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scatter.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix): ../src/fdmdv2_plot_scatter.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scatter.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scatter$(PreprocessSuffix): ../src/fdmdv2_plot_scatter.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_scatter$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scatter.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(ObjectSuffix): ../src/fdmdv2_plot_waterfall.cpp $(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_waterfall.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(DependSuffix): ../src/fdmdv2_plot_waterfall.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_waterfall.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(PreprocessSuffix): ../src/fdmdv2_plot_waterfall.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_waterfall.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix): ../src/fdmdv2_plot_spectrum.cpp $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_spectrum.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix): ../src/fdmdv2_plot_spectrum.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_spectrum.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix): ../src/fdmdv2_plot_spectrum.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_spectrum.cpp"

$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix): ../src/fdmdv2_pa_wrapper.cpp $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_pa_wrapper.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix): ../src/fdmdv2_pa_wrapper.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_pa_wrapper.cpp"

$(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix): ../src/fdmdv2_pa_wrapper.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_pa_wrapper.cpp"

$(IntermediateDirectory)/src_fdmdv2_process_audio$(ObjectSuffix): ../src/fdmdv2_process_audio.cpp $(IntermediateDirectory)/src_fdmdv2_process_audio$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_process_audio.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_process_audio$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_process_audio$(DependSuffix): ../src/fdmdv2_process_audio.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_process_audio$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_process_audio$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_process_audio.cpp"

$(IntermediateDirectory)/src_fdmdv2_process_audio$(PreprocessSuffix): ../src/fdmdv2_process_audio.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_process_audio$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_process_audio.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix): ../src/fdmdv2_plot_scalar.cpp $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scalar.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix): ../src/fdmdv2_plot_scalar.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scalar.cpp"

$(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix): ../src/fdmdv2_plot_scalar.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/src/fdmdv2_plot_scalar.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/src_dlg_about$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_about$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_about$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audio$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audio$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_dlg_audio$(PreprocessSuffix)
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
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_waterfall$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_spectrum$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_pa_wrapper$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_process_audio$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_process_audio$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_process_audio$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(DependSuffix)
	$(RM) $(IntermediateDirectory)/src_fdmdv2_plot_scalar$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "C:\bin\Projects\Radio\fdmdv2\build\.build-release\fdmdv2"


