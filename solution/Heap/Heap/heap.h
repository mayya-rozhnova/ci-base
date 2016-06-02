#ifndef SOLUTION_HEAP_HEAP_HEAP_H_
#define SOLUTION_HEAP_HEAP_HEAP_H_

class heap {
 private:
  int size;
  int d;
  int* arr;
  int n;
 public:
  int min_child(int i);
  void up(int i);
  void down(int i);
  heap(int _size, int _d);
  ~heap();
  void hilling();
  void insert(int key);
  int deletemin();
  void swap(int i, int p);
};

#endif  //  SOLUTION_HEAP_HEAP_HEAP_H_
