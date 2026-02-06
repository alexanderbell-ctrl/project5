horseRace: main.o horse.o
	g++ main.o horse.o -o horseRace

main.o: main.cpp horse.h
	g++ -c main.cpp

horse.o: horse.h horse.cpp
	g++ -c horse.cpp

clean:
	rm horseRace
	rm *.o

run: horseRace
	./horseRace
