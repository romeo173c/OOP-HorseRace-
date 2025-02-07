#include <iostream>
#include "Race.H"
#include "Horse.H"


Race::Race(){
	for (int i = 0; i < 5; i++){ 
		horses[i].init(i,16);

	}
}

void Race::run(){
	bool keepGoing = true;
	while (keepGoing){
	for (int i = 0; i < 5; i++){
		horses[i].advance();
		horses[i].printLane();
		if(horses[i].isWinner()){
			keepGoing = false;
		}
	}
	std::cout << "Press Enter To Adance" << std::endl;
	std::cin.ignore();
	} 
}


