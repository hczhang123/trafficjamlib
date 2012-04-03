// grid.h
#ifndef GRID_H
#define GRID_H

#include <vector>
#include "coordinates.h"
#include "car.h"

class Grid {
 private:
  int streetsize;
  coors dimensions;
  int speedlimit;
  std::vector<Car> cars;
 public:
  Grid(coors si, int st, int sp);
  Grid();
  void addcar(int v);
  void move(void);
  int carssize(void);
  coors corrs(int i);
  coors size(void);
  int street(void);
};

#endif
