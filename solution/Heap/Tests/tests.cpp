#include "Heap.h"
#include <gtest.h>

TEST(Heap, can_sort_with_heap) {
  heap a(8, 2);
  int _arr[8] = { 4, 5, 9, 1, 2, 7, 8, 6 };
  int true_arr[8] = { 1, 2, 4, 5, 6, 7, 8 , 9 };
  for (int i = 0; i < 8; i++)
    a.insert(_arr[i]);
  a.hilling();
  for (int i = 0; i < 8; i++) {
    _arr[i] = a.deletemin();
  }
  bool fl = true;
  for (int i = 0; i < 8; i++)
  if (_arr[i] != true_arr[i])
    fl = false;
  EXPECT_EQ(fl, true);
}

TEST(Heap, can_swap) {
  heap a(3, 2);
  a.insert(2);
  a.insert(1);
  a.up(1);
  EXPECT_EQ(a.deletemin(), 1);
}

TEST(Heap, can_find_minchild) {
  heap a(3, 2);
  a.insert(1);
  a.insert(2);
  a.insert(5);
  EXPECT_EQ(a.min_child(0), 1);
}

TEST(Heap, cant_insert_when_heap_is_full) {
  heap a(8, 2);
  int _arr[8] = { 4, 5, 9, 1, 2, 7, 8, 6 };
  for (int i = 0; i < 8; i++)
    a.insert(_arr[i]);
  EXPECT_ANY_THROW(a.insert(1));
}

TEST(Heap, can_down) {
  heap a(3, 2);
  a.insert(2);
  a.insert(1);
  a.down(0);
  EXPECT_NE(a.deletemin(), 2);
}
