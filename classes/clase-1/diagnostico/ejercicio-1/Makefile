output: main.o 
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp

Player.o: Player.cpp
	g++ -c Player.cpp Player.h

Match.o: Match.cpp
	g++ -c Match.cpp Match.h

clean:
	rm *.o output
