#include <iostream>
#include <ctime>
#include "horse.h"

Horse::Horse() {
	Horse::position = 0;
	Horse::index = 0;
	Horse::track_length = 0;
} //end Horse constructor

void Horse::Horse_init(int index, int trackLength) {
	Horse::index = index;
	Horse::track_length = trackLength;
} //end init

void Horse::advance() {
	std::srand(std::time(NULL));
	int coin_flip = (std::rand() %1);
	Horse::position += coin_flip;
} //end advance

void Horse::printLane() {
	for (int i = 0; i < Horse::position; i++) {
		std::cout << "*";
	} //end for
	
	std::cout << Horse::index;
	
	for (int i = Horse::position; i < 14; i++) {
		std::cout << "*";
	} //end for
	std::cout << std::endl;
} //end printLane

bool Horse::isWinner() {
	if(Horse::position == Horse::track_length) {
		return true;
		std::cout << "Horse " << Horse::index << "wins!" << std::endl;
	} //end if
	else {
		return false;
	} //end else
} //end isWinner

