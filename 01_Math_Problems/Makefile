CC=g++

all:\
problem001.exe\
problem002.exe\
problem003.exe\
problem004.exe

clean:
	rm -f ./*.o
	rm -f ./*.exe

%.o: %.cpp
	$(CC) -c -o $@ $^ --std=c++11

%.exe: %.o
	$(CC) -o $@ $^