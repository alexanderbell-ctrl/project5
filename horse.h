#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position;
		int index;
		int track_length;
	public:
		Horse();
		void Horse_init(int index, int track_length);
		void advance();
		void printLane();
		bool isWinner();
};

#endif
