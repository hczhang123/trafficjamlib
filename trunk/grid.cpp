// grid.cpp
#include "grid.h"
#include "car.h"
#include "coordinates.h"
#include <vector>

Grid::Grid(coors si, int st, int sp) { // initialize a grid with your parameters
  dimensions.x = si.x;
  dimensions.y = si.y;
  streetsize = st;
  speedlimit = sp;
}

Grid::Grid(void) { // initialize a grid with default parameters
  dimensions.x = 10;
  dimensions.y = 10;
  streetsize = 10;
  speedlimit = 5;
}

void Grid::addcar(int v) { // add a car to the grid at the given coordinate
  coors c;
  c.x = 0;
  c.y = v;
  cars.push_back(Car::Car(3,c,streetsize));
}

void Grid::move(void) { // update all of the cars on the grid
  for(int i=0; i<cars.size(); i++) {
    cars[i].update();
  }
}

int Grid::carssize(void) { // return the number of cars
  return cars.size();
}

coors Grid::corrs(int i) { // return the coordinates of the car in question
  return cars[i].corrs();
}

coors Grid::size(void) { // return the size of the grid
  return dimensions;
}

int Grid::street(void) { // return the length of a street
  return streetsize;
}
