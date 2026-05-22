#include "unity.h"
#include "math_utils.h"

TEST_CASE("add returns correct sum", "[math]")
{
    TEST_ASSERT_EQUAL_INT(5,  add(2, 3));
    TEST_ASSERT_EQUAL_INT(0,  add(0, 0));
    TEST_ASSERT_EQUAL_INT(-1, add(1, -2));
}

TEST_CASE("multiply returns correct product", "[math]")
{
    TEST_ASSERT_EQUAL_INT(6,  multiply(2, 3));
    TEST_ASSERT_EQUAL_INT(0,  multiply(0, 99));
    TEST_ASSERT_EQUAL_INT(-4, multiply(2, -2));
}