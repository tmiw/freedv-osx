##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=pa_enum
ConfigurationName      :=Release
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
WorkspacePath          := "C:\Users\wittend\Projects\Radio\fdmdv2"
ProjectPath            := "C:\Users\wittend\Projects\Radio\fdmdv2\pa_enum"
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=wittend
Date                   :=8/14/2012
CodeLitePath           :="C:\Program Files\CodeLite"
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
ObjectsFileList        :="C:\Users\wittend\Projects\Radio\fdmdv2\pa_enum\pa_enum.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
CmpOptions             := -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no) $(Preprocessors)
C_CmpOptions           := -O2 -Wall $(shell wx-config --cxxflags --unicode=yes --debug=no) $(Preprocessors)
LinkOptions            :=  -mwindows -s $(shell wx-config --debug=no --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)/bin/MinGW/msys/1.0/local/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)portaudio $(LibrarySwitch)portaudiocpp 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/bin/MinGW/msys/1.0/local/lib 


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
WXWIN:=C:\bin\wxWidgets-2.9.4
PATH:=$(WXWIN)\lib\gcc_dll;$(PATH)
WXCFG:=gcc_dll\mswu
UNIT_TEST_PP_SRC_DIR:=C:\bin\UnitTest++-1.3
Objects=$(IntermediateDirectory)/gui$(ObjectSuffix) $(IntermediateDirectory)/main$(ObjectSuffix) 

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
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/Users/wittend/Projects/Radio/fdmdv2/pa_enum/gui.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/gui$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/gui$(DependSuffix): gui.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/gui$(ObjectSuffix) -MF$(IntermediateDirectory)/gui$(DependSuffix) -MM "C:/Users/wittend/Projects/Radio/fdmdv2/pa_enum/gui.cpp"

$(IntermediateDirectory)/gui$(PreprocessSuffix): gui.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/gui$(PreprocessSuffix) "C:/Users/wittend/Projects/Radio/fdmdv2/pa_enum/gui.cpp"

$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CompilerName) $(IncludePCH) $(SourceSwitch) "C:/Users/wittend/Projects/Radio/fdmdv2/pa_enum/main.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "C:/Users/wittend/Projects/Radio/fdmdv2/pa_enum/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "C:/Users/wittend/Projects/Radio/fdmdv2/pa_enum/main.cpp"


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
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "C:\Users\wittend\Projects\Radio\fdmdv2\.build-release\pa_enum"


