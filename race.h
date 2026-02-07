#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		const static int NUM_HORSES = 5;
		Horse horse[NUM_HORSES];
		int TRACK_LENGTH = 15;
	public:
		Race();
		void start();
};

#endif
