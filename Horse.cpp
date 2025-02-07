#include <iostream>
#include <random>
#include "Horse.H"

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
    Horse::position = 0;
    Horse::numHorse = 0;
    Horse::trackLength = 15;
}

void Horse::init(int horseNum,int trackLength){
    Horse::position = 0;
    Horse::numHorse = horseNum;
    Horse::trackLength = trackLength;
}


void Horse::printLane(){
        std::string track[Horse::trackLength];
        for (int i = 0; i < Horse::trackLength; i++){
                if (i == Horse::position){
                        std::string test = std::to_string(Horse::position);
                        track[i] = test;
                        std::cout << track[i];
                } // end if
                else{
                        track[i] = '-';
                        std::cout << track[i];
                } // end else
        } // end for
        std::cout << std::endl;
} // end printLane

    




void Horse::advance(){
    int coin = dist(rd);

    if (coin == 1){
        Horse::position +=1;
    }

}

bool Horse::isWinner(){
    
    if(Horse::position == 16){
        std::cout << "Horse " << Horse::position << "Wins!" << std::endl;
        return true;
    }else{
        return false;
    }

}
