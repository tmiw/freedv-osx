WX_GTK_PATH=/home/david/Desktop/wxWidgets-2.9.4/build_gtk

WX_CONFIG=$(WX_GTK_PATH)/wx-config
WX_CPPFLAGS = $(shell $(WX_CONFIG) --cxxflags)
WX_LIBS = $(shell $(WX_CONFIG) --libs core, base, aui)

CPP_FLAGS = $(WX_CPPFLAGS) -g -Wall
LIBS = $(WX_LIBS)  -lm -lportaudiocpp -lpthread 

all: image

image: image.cpp
	g++ -o image image.cpp  $(CPP_FLAGS) $(LIBS)

clean:
	rm -f *.o image
