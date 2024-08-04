#include "test_framework.h"

void test_ft_memmove_basic_functionality() {
    char src[10] = "abcdefghi";
    char dest[10];
    char expected[10] = "abcdefghi";

    ft_memmove(dest, src, 10);
    ASSERT_EQUAL_MEM(expected, dest, 10);
    printf("test_ft_memmove_basic_functionality passed\n");
}

void test_ft_memmove_partial_copy() {
    char src[10] = "abcdefghi";
    char dest[10] = "XXXXXXXXX";
    char expected[10] = "abcdeXXX";

    ft_memmove(dest, src, 5);
    ASSERT_EQUAL_MEM(expected, dest, 10);
    printf("%s", dest);
    printf("test_ft_memmove_partial_copy passed\n");
}

void test_ft_memmove_overlap_forward() {
    char buffer[10] = "abcdefghi";
    char expected[10] = "abcdefdefi";

    ft_memmove(buffer + 3, buffer, 6);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_ft_memmove_overlap_forward passed\n");
}

void test_ft_memmove_overlap_backward() {
    char buffer[10] = "abcdefghi";
    char expected[10] = "abcdabcghi";

    ft_memmove(buffer, buffer + 3, 6);
    ASSERT_EQUAL_MEM(expected, buffer, 10);
    printf("test_ft_memmove_overlap_backward passed\n");
}

void test_ft_memmove_null_pointer() {
    char *src = NULL;
    char *dest = NULL;
    void *result = ft_memmove(dest, src, 5);
    assert(result == NULL);
    printf("test_ft_memmove_null_pointer passed\n");
}

int test_ft_memmove() {
    test_ft_memmove_basic_functionality();
    test_ft_memmove_partial_copy();
    test_ft_memmove_overlap_forward();
    test_ft_memmove_overlap_backward();
    test_ft_memmove_null_pointer();

    printf("All tests passed!\n");
    return 0;
}