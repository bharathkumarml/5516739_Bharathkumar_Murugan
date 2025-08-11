#include "unity.h"
#include "demo.h"

void setUp(void) {}
void tearDown(void) {}

void test_sum(void) {
    TEST_ASSERT_EQUAL(5, sum(2, 3));
}

void test_difference(void) {
    TEST_ASSERT_EQUAL(-1, difference(2, 3));
}

void test_product(void) {
    TEST_ASSERT_EQUAL(6, product(2, 3));
}

void test_division(void) {
    TEST_ASSERT_EQUAL_FLOAT(2.5, division(5, 2));
}

void test_modulo(void) {
    TEST_ASSERT_EQUAL(1, modulo(5, 2));
}

void test_square(void) {
    TEST_ASSERT_EQUAL(9, square(3));
}

void test_exclamation(void) {
    TEST_ASSERT_EQUAL_INT64(1307674368000LL, exclamation(15));
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_sum);
    RUN_TEST(test_difference);
    RUN_TEST(test_product);
    RUN_TEST(test_division);
    RUN_TEST(test_modulo);
    RUN_TEST(test_square);
    RUN_TEST(test_exclamation);

    return UNITY_END();
}
