TARGETS = test.exe

test.exe : test.c sndfile.h libsndfile-1.dll
	gcc -I . $< libsndfile-1.dll -o $@

# Need to the MinGW sndfile.h
sndfile.h : ../../include/sndfile.h
	cp -f $+ $@

# Need the DLL in the local directory.
libsndfile-1.dll : ../../bin/libsndfile-1.dll
	cp -f $+ $@

