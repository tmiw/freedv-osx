##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=hamlib_trial
ConfigurationName      :=Debug
WorkspacePath          := "D:\Projects\Radio\fdmdv2\build\codelite"
ProjectPath            := "D:\Projects\Radio\fdmdv2\build\codelite\hamlib_trial"
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="hamlib_trial.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := $(shell wx-config --rcflags)
RcCompilerName         :=windres
LinkOptions            :=  $(shell wx-config --libs --debug) -mwindows
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
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cflags --debug)  -DSVN_REVISION=\"1237\"  $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall  -DSVN_REVISION=\"1237\"  $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=D:\bin\CodeLite
WXWIN:=D:\bin\wxWidgets-2.9.4
PATH:=$(WXWIN)\lib\gcc_dll;$(PATH)
WXCFG:=gcc_dll\mswu
UNIT_TEST_PP_SRC_DIR:=D:\bin\UnitTest++1.3
Objects0=$(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/MainFrame$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter_bitmaps$(ObjectSuffix) $(IntermediateDirectory)/win_resources.rc$(ObjectSuffix) $(IntermediateDirectory)/dlg_rig_ctrl$(ObjectSuffix) 



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
$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/build/codelite/hamlib_trial/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/MainFrame$(ObjectSuffix): MainFrame.cpp $(IntermediateDirectory)/MainFrame$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/build/codelite/hamlib_trial/MainFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MainFrame$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MainFrame$(DependSuffix): MainFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MainFrame$(ObjectSuffix) -MF$(IntermediateDirectory)/MainFrame$(DependSuffix) -MM "MainFrame.cpp"

$(IntermediateDirectory)/MainFrame$(PreprocessSuffix): MainFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MainFrame$(PreprocessSuffix) "MainFrame.cpp"

$(IntermediateDirectory)/wxcrafter$(ObjectSuffix): wxcrafter.cpp $(IntermediateDirectory)/wxcrafter$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/build/codelite/hamlib_trial/wxcrafter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter$(DependSuffix): wxcrafter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter$(DependSuffix) -MM "wxcrafter.cpp"

$(IntermediateDirectory)/wxcrafter$(PreprocessSuffix): wxcrafter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter$(PreprocessSuffix) "wxcrafter.cpp"

$(IntermediateDirectory)/wxcrafter_bitmaps$(ObjectSuffix): wxcrafter_bitmaps.cpp $(IntermediateDirectory)/wxcrafter_bitmaps$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/build/codelite/hamlib_trial/wxcrafter_bitmaps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter_bitmaps$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter_bitmaps$(DependSuffix): wxcrafter_bitmaps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter_bitmaps$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter_bitmaps$(DependSuffix) -MM "wxcrafter_bitmaps.cpp"

$(IntermediateDirectory)/wxcrafter_bitmaps$(PreprocessSuffix): wxcrafter_bitmaps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter_bitmaps$(PreprocessSuffix) "wxcrafter_bitmaps.cpp"

$(IntermediateDirectory)/win_resources.rc$(ObjectSuffix): win_resources.rc
	$(RcCompilerName) -i "D:/Projects/Radio/fdmdv2/build/codelite/hamlib_trial/win_resources.rc" $(RcCmpOptions)   $(ObjectSwitch)$(IntermediateDirectory)/win_resources.rc$(ObjectSuffix) $(RcIncludePath)
$(IntermediateDirectory)/dlg_rig_ctrl$(ObjectSuffix): dlg_rig_ctrl.cpp $(IntermediateDirectory)/dlg_rig_ctrl$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Projects/Radio/fdmdv2/build/codelite/hamlib_trial/dlg_rig_ctrl.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dlg_rig_ctrl$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dlg_rig_ctrl$(DependSuffix): dlg_rig_ctrl.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/dlg_rig_ctrl$(ObjectSuffix) -MF$(IntermediateDirectory)/dlg_rig_ctrl$(DependSuffix) -MM "dlg_rig_ctrl.cpp"

$(IntermediateDirectory)/dlg_rig_ctrl$(PreprocessSuffix): dlg_rig_ctrl.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dlg_rig_ctrl$(PreprocessSuffix) "dlg_rig_ctrl.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/MainFrame$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/MainFrame$(DependSuffix)
	$(RM) $(IntermediateDirectory)/MainFrame$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/wxcrafter$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/wxcrafter$(DependSuffix)
	$(RM) $(IntermediateDirectory)/wxcrafter$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/wxcrafter_bitmaps$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/wxcrafter_bitmaps$(DependSuffix)
	$(RM) $(IntermediateDirectory)/wxcrafter_bitmaps$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/win_resources.rc$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/dlg_rig_ctrl$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/dlg_rig_ctrl$(DependSuffix)
	$(RM) $(IntermediateDirectory)/dlg_rig_ctrl$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "../.build-debug/hamlib_trial"


