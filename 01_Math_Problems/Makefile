CC=g++

SOURCES=\
	problem001.exe\
	problem002.exe\
	problem003.exe\
	problem004.exe\
	problem005.exe\
	problem006.exe

all: $(SOURCES)

clean:
	rm -f ./*.o
	rm -f ./*.exe

%.o: %.cpp
	$(CC) -c -o $@ $^ --std=c++11

%.exe: %.o
	$(CC) -o $@ $^