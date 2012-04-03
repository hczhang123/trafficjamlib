all: trafficjam

trafficjam: car.o coordinates.o grid.o controlauto.o
	g++ car.o coordinates.o grid.o controlauto.o -o trafficjam

car.o: car.cpp car.h coordinates.h
	g++ -c car.cpp

coordinates.o: coordinates.cpp coordinates.h
	g++ -c coordinates.cpp

grid.o: grid.cpp grid.h car.h coordinates.h
	g++ -c grid.cpp

controlauto.o: controlauto.cpp car.h grid.h coordinates.h
	g++ -c controlauto.cpp

clean:
	rm -rf *o trafficjam
