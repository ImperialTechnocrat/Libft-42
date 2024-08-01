#ifndef TEST_FRAMEWORK_H
# define TEST_FRAMEWORK_H

# include <stdio.h>
# include "../include/libft.h"  // Adjust path if needed

#define ASSERT_TRUE(cond) do { if (!(cond)) printf("Test failed: %s\n", #cond); } while (0)
#define ASSERT_FALSE(cond) do { if ((cond)) printf("Test failed: %s\n", #cond); } while (0)
#define RUN_TEST(test) do { printf("Running %s...\n", #test); test(); } while (0)

int test_isalpha(void);

#endif
