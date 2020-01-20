CC=g++

%.o: %.cpp
	$(CC) -c -o $@ $< --std=c++11

problem001.exe: problem001.o
	$(CC) -o problem001.exe problem001.o