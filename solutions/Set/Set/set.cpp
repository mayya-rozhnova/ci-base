#include "set.h"

sets :: sets(int s) {
  size = s;
  arr = new int[size];
  harr = new int[size];
  for (int i = 0; i < size; i++) {
    arr[i] = -1;
    harr[i] = -1;
  }
}

void sets :: add(int a) {
  if ((a >= size) || (a < 0))
    throw std::exception("wrong index");
  arr[a] = a;
  harr[a] = 0;
}

void sets :: un(int a, int b) {
  if ((a >= size) || (a < 0) || (b >= size) || (b < 0))
    throw std::exception("wrong index");
  if ((arr[a] != -1) && (arr[b] != -1)) {
    if (a != b) {
      int c = a;
      int d = b;
      while (arr[c] != c)
        c = arr[c];
      while (arr[d] != d)
        d = arr[d];
      if (c != d) {
        if (harr[c] < harr[d]) {
          arr[c] = d;
        } else {
          arr[d] = c;
          if (harr[a] == harr[b])
            ++harr[c];
        }
      }
    }
  }
}

int sets :: search(int a) {
  if ((a >= size) || (a < 0))
    throw std::exception("wrong index");
  while (arr[a] != a)
    a = arr[a];
  return arr[a];
}

void sets :: clear() {
  for (int i = 0; i < size; i++) {
    arr[i] = -1;
    harr[i] = -1;
  }
}

void sets :: print() {
  for (int i = 0; i < size; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
  for (int i = 0; i < size; i++)
    std::cout << harr[i] << " ";
  std::cout << std::endl;
}

sets :: ~sets() {
  delete[] arr;
  delete[] harr;
}
