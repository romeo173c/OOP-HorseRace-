horseRace: Horse.o Race.o main.o
	g++ Horse.o Race.o main.o -o HorseRace

horse.o: Horse.H  Horse.cpp
	g++ -c Horse.cpp


race.o: Race.H Horse.H Race.cpp
	g++ -c Race.cpp

main.o: Race.H Horse.H main.cpp
	g++ -c main.cpp

run: HorseRace
	./HorseRace
