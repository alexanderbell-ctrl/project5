#include <iostream>
#include "horse.h"

void testHorse();

int main() {
	std::cout << "OOP Horse Race" << std::endl;

	testHorse();

	return 0;
}

void testHorse() {
	Horse h;
	h.Horse_init(1, 15);
	h.printLane();
}
