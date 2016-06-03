#include "Set.h"
#include <gtest.h>

TEST(SepSet, can_create_SepSet) {
  EXPECT_NO_THROW(Sepset set(10));
}

TEST(SepSet, can_create_singleton) {
  Sepset set(10);
  set.single(1);
  EXPECT_EQ(set.val[1], 1);
}

TEST(SepSet, cant_create_singleton_when_index_more_then_size) {
  Sepset set(10);
  EXPECT_ANY_THROW(set.single(11));
}

TEST(SepSet, can_merge) {
  Sepset set(10);
  set.single(1);
  set.single(0);
  set.single(2);
  set.merge(1, 2);
  set.merge(0, 1);
  EXPECT_EQ(set.val[0], 2);
}

TEST(SepSet, can_search) {
  Sepset set(10);
  set.single(1);
  set.single(0);
  set.single(2);
  set.merge(1, 2);
  set.merge(2, 0);
  EXPECT_EQ(set.search(1), 0);
}
