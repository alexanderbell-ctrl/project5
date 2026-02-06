#include <iostream>
#include "horse.h"

std::srand(std::time(NULL));

Horse::Horse() {
	Horse::position = 0;
	Horse::index = 0;
	Horse::track_length = 0;
} //end Horse constructor

void Horse::init(int index, int trackLength) {
	Horse::index = index;
	Horse::track_length = tracklength;
} //end init

void Horse::advance() {
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

