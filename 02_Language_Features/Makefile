CC=g++
STD=c++11

PROBLEMS=\
	problem015.exe\
	problem016.exe\
	problem017.exe\
	problem018.exe\
	problem019.exe\
	problem020.exe\
	problem021.exe\
	problem022.exe

all: $(PROBLEMS)

clean:
	-rm ./*.exe

%.o: %.cpp
	$(CC) -c -o $@ $^ --std=$(STD)

%.exe: %.o
	$(CC) -o $@ $^