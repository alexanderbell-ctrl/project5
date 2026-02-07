#include <iostream>
#include <ctime>
#include "horse.h"
#include "race.h"

//void testHorse();

int main() {
	std::srand(std::time(NULL));	
	std::cout << "OOP Horse Race" << std::endl;

//	testHorse();
	Race race;
	race.start();

	return 0;
}

/*
void testHorse() {
	Horse h;
	h.Horse_init(1, 15);
	bool keepGoing = true;
	while (keepGoing) {
		h.advance();
		h.printLane();
		if (h.isWinner()) {
			keepGoing = false;
		}
	}
}
*/
