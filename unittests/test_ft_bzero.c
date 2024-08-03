#include "test_framework.h"

void test_ft_bzero_basic_functionality() {
    char buffer[10];
    char expected[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    ft_memset(buffer, 'A', 10);
    ft_bzero(buffer, 10);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_ft_bzero_basic_functionality passed\n");
}

void test_ft_bzero_zero_length() {
    char buffer[10] = { 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A' };
    char expected[10] = { 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A' };

    ft_bzero(buffer, 0);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_ft_bzero_zero_length passed\n");
}

void test_ft_bzero_boundary_conditions() {
    char buffer[10] = { 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A' };
    char expected[10] = { 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 0, 0 };

    ft_bzero(buffer + 8, 2);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_ft_bzero_boundary_conditions passed\n");
}

void test_ft_bzero_null_pointer() {
    char *buffer = NULL;

    ft_bzero(buffer, 10);
    // Since we cannot assert anything meaningful here (as this would typically
    // cause a segmentation fault), we are only ensuring the program does not crash.
    printf("test_ft_bzero_null_pointer passed (no crash)\n");
}

int test_ft_bzero() {
    test_ft_bzero_basic_functionality();
    test_ft_bzero_zero_length();
    test_ft_bzero_boundary_conditions();
    // Uncommenting the line below may crash the program, it is shown here for completeness
    test_ft_bzero_null_pointer();

    printf("All tests passed!\n");
    return 0;
}