#ifndef Horse_H_Exist
#define Horse_H_Exist


class Horse{ 
	private:
		int numHorse;
		int position;
		int trackLength;
	
	public:
		Horse();
		void init(int numHorse,int trackLength);
	    bool isWinner();
		void advance();
		void printLane();	

	};

#endif


