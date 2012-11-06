##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=pa_enum
ConfigurationName      :=Release
WorkspacePath          := "C:\bin\Projects\Radio\fdmdv2\build"
ProjectPath            := "C:\bin\Projects\Radio\fdmdv2\tests\pa_enum"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=OFA-Staff
Date                   :=11/5/2012
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
ObjectsFileList        :="C:\bin\Projects\Radio\fdmdv2\tests\pa_enum\pa_enum.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := $(shell wx-config --rcflags)
RcCompilerName         :=windres
LinkOptions            :=  -mwindows -s $(shell wx-config --debug=no --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)/bin/MinGW-4.6.1/msys/1.0/local/include $(IncludeSwitch)../../codec2-dev/src $(IncludeSwitch)/bin/Projects/Audio/libsndfile/ 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)portaudio $(LibrarySwitch)portaudiocpp 
ArLibs                 :=  "libportaudio.a" "libportaudiocpp.a" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/bin/MinGW-4.6.1/msys/1.0/local/lib 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no)  -DSVN_REVISION=\"936\"  $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no)  -DSVN_REVISION=\"936\"  $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=C:\bin\CodeLite
WXWIN:=C:\bin\wxWidgets-2.9.4
PATH:=$(WXWIN)\lib\gcc_dll;$(PATH)
WXCFG:=gcc_dll\mswu
UNIT_TEST_PP_SRC_DIR:=C:\bin\UnitTest++-1.3
Objects=$(IntermediateDirectory)/gui$(ObjectSuffix) $(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/AudioOptsDialog$(ObjectSuffix) 

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
$(IntermediateDirectory)/gui$(ObjectSuffix): gui.cpp $(IntermediateDirectory)/gui$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/gui.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/gui$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/gui$(DependSuffix): gui.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/gui$(ObjectSuffix) -MF$(IntermediateDirectory)/gui$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/gui.cpp"

$(IntermediateDirectory)/gui$(PreprocessSuffix): gui.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/gui$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/gui.cpp"

$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/main.cpp"

$(IntermediateDirectory)/AudioOptsDialog$(ObjectSuffix): AudioOptsDialog.cpp $(IntermediateDirectory)/AudioOptsDialog$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/AudioOptsDialog.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AudioOptsDialog$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AudioOptsDialog$(DependSuffix): AudioOptsDialog.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/AudioOptsDialog$(ObjectSuffix) -MF$(IntermediateDirectory)/AudioOptsDialog$(DependSuffix) -MM "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/AudioOptsDialog.cpp"

$(IntermediateDirectory)/AudioOptsDialog$(PreprocessSuffix): AudioOptsDialog.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AudioOptsDialog$(PreprocessSuffix) "C:/bin/Projects/Radio/fdmdv2/tests/pa_enum/AudioOptsDialog.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/gui$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/gui$(DependSuffix)
	$(RM) $(IntermediateDirectory)/gui$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/AudioOptsDialog$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/AudioOptsDialog$(DependSuffix)
	$(RM) $(IntermediateDirectory)/AudioOptsDialog$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "C:\bin\Projects\Radio\fdmdv2\build\.build-release\pa_enum"


