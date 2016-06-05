#include "funcs.h"

void main() {
  int k = 100;
  int n = 100;
  int m = 100;
  int size = n * m + 2 * n;
  sets set(size);
  int count;
  double res = 0;
    for (int i = 0; i < k; i++) {
      preparation(&set, n, m);
      count = 0;
      countino(&set, &count, n, m);
      res += count * 1.0 / n / m;
    }
    std::cout <<"percentage = " << (res / k)
    << std::endl;
}
