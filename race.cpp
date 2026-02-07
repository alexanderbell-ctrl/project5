#include "race.h"
#include "horse.h"

Race::Race() {
	for(int i = 0; i < NUM_HORSES; i++) {
		horses[i].Horse_init(i, TRACK_LENGTH);
	} //end for
} //end race


void Race::start() {
	bool keepGoing = true;
	while(keepGoing) {
		for(int i = 0; i < NUM_HORSES; i++) {
			horses[i].advance();
			horses[i].printLane();
			if(horses[i].isWinner()) {
				keepGoing = false;
			} //end if
		} //end for
	} //end while
} //end start

