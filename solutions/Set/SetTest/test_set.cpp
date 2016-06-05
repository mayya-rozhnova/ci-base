#include <gtest.h>
#include "set.h"

TEST(sets, can_create_set) {
  sets A(10);
  A.print();
}

TEST(sets, can_add) {
  sets A(5);
  A.add(3);
  A.print();
  int* tmp = new int[5];
  for (int i = 0; i < 5; i++)
    tmp[i] = -1;
  tmp[3] = 3;
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(tmp[i], A.arr[i]);
}

TEST(sets, can_union) {
  sets A(5);
  A.add(1);
  A.add(3);
  A.un(1, 3);
  A.print();
  int* tmp = new int[5];
  for (int i = 0; i < 5; i++)
    tmp[i] = -1;
  tmp[1] = 1;
  tmp[3] = 1;
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(tmp[i], A.arr[i]);
}

TEST(sets, can_search) {
  sets A(5);
  A.add(2);
  int tmp = A.search(2);
  EXPECT_EQ(2, tmp);
}

TEST(sets, throw_when_wrong_index) {
  sets A(5);
  ASSERT_ANY_THROW(A.add(-10));
}
