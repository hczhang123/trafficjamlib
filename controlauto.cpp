// controlauto.cpp
#include <vector>
#include "car.h"
#include "grid.h"
#include "coordinates.h"

int main() {
  Grid::Grid g; // make the grid
  g.addcar(2); // add a car
  g.move(); // update all the cars
  coors a;
  a.x = 1;
  a.y = 1;
  Car::Car c (1,a,10);
  return 0;
}
