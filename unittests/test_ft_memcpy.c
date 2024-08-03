#include "test_framework.h"
#include <assert.h>


void test_ft_memcpy_basic_functionality() {
    char src[10] = "abcdefghi";
    char dest[10];
    char expected[10] = "abcdefghi";

    ft_memcpy(dest, src, 10);
    ASSERT_EQUAL_MEM(expected, dest, 10);
    printf("test_ft_memcpy_basic_functionality passed\n");
}

void test_ft_memcpy_partial_copy() {
    char src[10] = "abcdefghi";
    char dest[10] = "XXXXXXXXX";
    char expected[10] = "abcdeXXXXX";

    ft_memcpy(dest, src, 5);
    ASSERT_EQUAL_MEM(expected, dest, 10);
    printf("test_ft_memcpy_partial_copy passed\n");
}

void test_ft_memcpy_overlap() {
    char buffer[10] = "abcdefghi";
    char expected[10] = "abcdeefghi";

    ft_memcpy(buffer + 5, buffer, 5);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_ft_memcpy_overlap passed\n");
}

void test_ft_memcpy_null_pointer() {
    char *src = NULL;
    char dest[10];
    void *result = ft_memcpy(dest, src, 5);
    assert(result == NULL);
    printf("test_ft_memcpy_null_pointer passed\n");
}

int test_ft_memcpy(void) {
    test_ft_memcpy_basic_functionality();
    test_ft_memcpy_partial_copy();
    test_ft_memcpy_overlap();
    test_ft_memcpy_null_pointer();

    printf("All tests passed!\n");
    return 0;
}