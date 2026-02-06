horseRace: main.cpp
	g++ main.cpp -o horseRace

clean:
	rm horseRace

run: horseRace
	./horseRace
