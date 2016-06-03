#ifndef SOLUTION_KRUSKUL_SET_SET_H_
#define SOLUTION_KRUSKUL_SET_SET_H_

#include "stdio.h"

class Sepset {
 public:
  int *val;
  int size;
  Sepset() {}
  explicit Sepset(int size_);
  void single(int i);
  void merge(int i, int j);
  int search(int i);
  void clear();
  ~Sepset();
};

#endif  // SOLUTION_KRUSKUL_SET_SET_H_
