all: main.exe

main.o: main.cpp mathutils.h greeter.h
	g++ -std=c++98 -Wall -c main.cpp -o main.o

mathutils.o: mathutils.cpp mathutils.h
	g++ -std=c++98 -Wall -c mathutils.cpp -o mathutils.o

greeter.o: greeter.cpp greeter.h
	g++ -std=c++98 -Wall -c greeter.cpp -o greeter.o

main.exe: mathutils.o greeter.o main.o
	g++ -std=c++98 mathutils.o greeter.o main.o -o main.exe

clean:
	rm -f *.o *.exe