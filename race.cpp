#include "race.h"
#include "horse.h"

Race::Race() {
	for(int i = 0; i < NUM_HORSES; i++) {
		horse[i].Horse_init(i+1, TRACK_LENGTH);
	} //end for
} //end race


void Race::start() {
	bool keepGoing = true;
	while(keepGoing) {
		for(int i = 0; i < NUM_HORSES; i++) {
			horse[i].advance();
			horse[i].printLane();
			if(horse[i].isWinner()) {
				keepGoing = false;
			} //end if
		} //end for
	} //end while
} //end start

