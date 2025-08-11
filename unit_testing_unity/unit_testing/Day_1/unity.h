#ifndef UNITY_H
#define UNITY_H

#include <stdio.h>
#include <stdlib.h>

#define TEST_ASSERT_EQUAL(expected, actual) do { \
    if ((expected) != (actual)) { \
        printf("FAIL: %s expected %d but got %d\n", __func__, (expected), (actual)); \
        exit(1); \
    } \
} while(0)

#define TEST_ASSERT_EQUAL_FLOAT(expected, actual) do { \
    if ((expected) != (actual)) { \
        printf("FAIL: %s expected %f but got %f\n", __func__, (expected), (actual)); \
        exit(1); \
    } \
} while(0)

#define TEST_ASSERT_EQUAL_INT64(expected, actual) do { \
    if ((expected) != (actual)) { \
        printf("FAIL: %s expected %lld but got %lld\n", __func__, (long long)(expected), (long long)(actual)); \
        exit(1); \
    } \
} while(0)

static int tests_run = 0;

#define UNITY_BEGIN() do { tests_run = 0; printf("Starting tests...\n"); } while(0)
#define RUN_TEST(test_func) do { \
    printf("Running %s...\n", #test_func); \
    test_func(); \
    tests_run++; \
    printf("%s passed.\n", #test_func); \
} while(0)
#define UNITY_END() (printf("Tests run: %d\n", tests_run), 0)

#endif
