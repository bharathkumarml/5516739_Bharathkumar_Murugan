#include "unity.h"

static int tests_run = 0;
static int tests_failed = 0;

void UnityBegin(void) {
    tests_run = 0;
    tests_failed = 0;
    printf("Starting tests...\n");
}

void UnityEnd(void) {
    printf("Tests run: %d, Failures: %d\n", tests_run, tests_failed);
}

void UnityAssertEqualInt(int expected, int actual, const char* testName) {
    tests_run++;
    if (expected == actual) {
        printf("%s: PASS\n", testName);
    } else {
        printf("%s: FAIL (Expected %d, Got %d)\n", testName, expected, actual);
        tests_failed++;
    }
}