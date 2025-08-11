#ifndef UNITY_H
#define UNITY_H

#include <stdio.h>

void UnityBegin(void);
void UnityEnd(void);
void UnityAssertEqualInt(int expected, int actual, const char* testName);

#define TEST_ASSERT_EQUAL_INT(expected, actual) UnityAssertEqualInt(expected, actual, __func__)

#endif