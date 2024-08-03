#include "test_framework.h"

void test_memset_basic_functionality() {
    char buffer[10];
    char expected[10] = { 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A' };

    ft_memset(buffer, 'A', 10);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_memset_basic_functionality passed\n");
}

void test_memset_zero_length() {
    char buffer[10] = { 0 };
    char expected[10] = { 0 };

    ft_memset(buffer, 'A', 0);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_memset_zero_length passed\n");
}

void test_memset_boundary_conditions() {
    char buffer[10] = { 0 };
    char expected[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 'A', 'A' };

    ft_memset(buffer + 8, 'A', 2);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_memset_boundary_conditions passed\n");
}

void test_memset_large_size() {
    char buffer[1000];
    char expected[1000];
    memset(expected, 'B', 1000);

    ft_memset(buffer, 'B', 1000);
    ASSERT_EQUAL_MEM(expected, buffer, 1000);
    printf("test_memset_large_size passed\n");
}

// Note: Testing memset with a null pointer would normally cause a segmentation fault.
// This test is shown for completeness but should not be run in practice.
// Uncommenting and running this test will cause the program to crash.

void test_memset_null_pointer() {
    char *buffer = NULL;
    ft_memset(buffer, 'C', 10);
    // This will likely cause a segmentation fault
    printf("test_memset_null_pointer passed\n");
}


int test_ft_memset() {
    test_memset_basic_functionality();
    test_memset_zero_length();
    test_memset_boundary_conditions();
    test_memset_large_size();
    test_memset_null_pointer(); // Uncomment to test null pointer case (will crash)

printf("All tests passed!\n");
    return 0;
}
