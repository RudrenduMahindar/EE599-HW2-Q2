#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SizeTest, IntArray) {
  Solution solution;
  int arr[]={1,2};
  int actual = solution.arraysize(arr,sizeof(arr));
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(SizeTest, FloatArray) {
  Solution solution;
  float arr[]={1.2,2.1};
  int actual = solution.arraysize(arr,sizeof(arr));
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(SizeTest, CharArray) {
  Solution solution;
  char arr[]={'a','b'};
  int actual = solution.arraysize(arr,sizeof(arr));
  int expected = 2;
  EXPECT_EQ(expected, actual);
}