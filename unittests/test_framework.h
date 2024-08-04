#ifndef TEST_FRAMEWORK_H
# define TEST_FRAMEWORK_H

# include <stdio.h>
# include <string.h>
# include <assert.h>
# include "../include/libft.h"  // Adjust path if needed

#define ASSERT_TRUE(cond) do { if (!(cond)) printf("Test failed: %s\n", #cond); } while (0)
#define ASSERT_FALSE(cond) do { if ((cond)) printf("Test failed: %s\n", #cond); } while (0)
#define RUN_TEST(test) do { printf("Running %s...\n", #test); test(); } while (0)
// Helper macro to print test results
#define ASSERT_EQUAL_MEM(expected, actual, size) do { \
    if (memcmp(expected, actual, size) != 0) { \
        fprintf(stderr, "Assertion failed: Memory blocks are not equal.\n"); \
        fprintf(stderr, "Expected: "); \
        for (size_t i = 0; i < size; i++) fprintf(stderr, "%02x ", (unsigned char)expected[i]); \
        fprintf(stderr, "\nActual:   "); \
        for (size_t i = 0; i < size; i++) fprintf(stderr, "%02x ", (unsigned char)actual[i]); \
        fprintf(stderr, "\n"); \
        exit(EXIT_FAILURE); \
    } \
} while (0)



int		test_isalpha(void);
int		test_ft_isdigit(void);
int		test_ft_isalnum(void);
int		test_ft_isascii(void);
int		test_ft_isprint(void);
int     test_ft_strlen(void);
int     test_ft_memset(void);
int     test_ft_bzero(void);
int     test_ft_memcpy(void);
int     test_ft_memmove(void);

#endif
