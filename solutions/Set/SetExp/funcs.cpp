#include "funcs.h"

void countino(sets *set, int *co, int n, int m) {
  bool f = false;
  int x;
  int y;
  srand(666);
  int z;
  while (f == false && (*co) < n * m) {
    do {
        x = rand() % n;
        y = rand() % m;
       } while ((*set).arr[x + (y + 1)*n] != -1);
    (*co)++;
    z = x + (y + 1)*n;
    (*set).add(z);
    if (x != 0) {
      if ((*set).arr[z - 1] != -1)
        (*set).un(z, z - 1);
      if ((*set).arr[z - n] != -1)
        (*set).un(z, z - n);
      if (x != n - 1)
        if ((*set).arr[z + 1] != -1)
          (*set).un(z, z + 1);
      if ((*set).arr[z + n] != -1)
        (*set).un(z, z + n);
      f = ((*set).search(0) == (*set).search((*set).size - 1));
    }
  }
}

void preparation(sets *set, int n, int m) {
  (*set).clear();
  for (int i = 0; i < n; i++) {
    (*set).add(i);
    (*set).add((*set).size - i - 1);
  }
  for (int i = 1; i < n; i++) {
    (*set).un(0, i);
    (*set).un((*set).size - 1, (*set).size - i - 1);
  }
}
