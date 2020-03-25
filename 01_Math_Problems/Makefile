CC=g++
STD=c++11

PROBLEMS=\
	problem001.exe\
	problem002.exe\
	problem003.exe\
	problem004.exe\
	problem005.exe\
	problem006.exe

all: $(PROBLEMS)

clean:
	rm -f ./*.o
	rm -f ./*.exe

%.o: %.cpp
	$(CC) -c -o $@ $^ --std=$(STD)

%.exe: %.o
	$(CC) -o $@ $^