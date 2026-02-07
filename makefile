horseRace: main.o horse.o race.o
	g++ main.o horse.o race.o -o horseRace

main.o: main.cpp horse.h race.h
	g++ -c main.cpp

horse.o: horse.h horse.cpp
	g++ -c horse.cpp

race.o: race.h race.cpp horse.h
	g++ -c race.cpp

clean:
	rm horseRace
	rm *.o

run: horseRace
	./horseRace
