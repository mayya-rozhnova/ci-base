#include "Heap.h"

heap::heap(int _size, int _d) {
  size = _size;
  d = _d;
  n = 0;
  arr = new int[size];
}

heap::~heap() {
  delete[]arr;
}

void heap::swap(int i, int p) {
  int tmp = arr[p];
  arr[p] = arr[i];
  arr[i] = tmp;
}

void heap::up(int i) {
  int p = (i - 1) / d;
  while (p >= 0 && arr[p] > arr[i]) {
    swap(i, p);
    i = p;
    p = (i - 1) / d;
  }
}

int heap::min_child(int i) {
  int f = i * d + 1;
  if (f > n - 1)
    return 0;
  int l = n - 1;
  if ((i * d + d) < (n - 1))
    l = i * d + d;
  int minc = f;
  for (int j = f; j <= l; j++)
  if (arr[minc] > arr[j])
    minc = j;
  return minc;
}

void heap::down(int i) {
  int s = min_child(i);
  while (s != 0 && arr[i] > arr[s]) {
    swap(s, i);
    i = s;
    s = min_child(i);
  }
}

void heap::hilling() {
  int j = n - 1;
  while (j > 0) {
    swap(j, 0);
    j--;
    down(0);
  }
}

void heap::insert(int key) {
  if (n == size)
    throw "heap is full";
  arr[n] = key;
  up(n);
  n++;
}

int heap::deletemin() {
  int min = arr[0];
  swap(n - 1, 0);
  n = n - 1;
  hilling();
  return min;
}
