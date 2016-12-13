//
// Created by fpopic on 17.10.16..
//

#include "gtest/gtest.h"
#include "mylib/MyRandom.h"

TEST(test2, test_eq) {
    MyRandom myRandom;

    int actual = myRandom.getFakeRandom();
    int expected = 5;

    ASSERT_EQ(actual, expected);
}