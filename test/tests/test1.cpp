//
// Created by fpopic on 17.10.16..
//

#include "gtest/gtest.h"
#include "../../lib/mylib/MyRandom.h"

TEST(test1, test_eq1) {
    EXPECT_EQ(1, 1);
}

TEST(test1, test_eq2) {
    MyRandom my;
    EXPECT_EQ(1, 1);
}