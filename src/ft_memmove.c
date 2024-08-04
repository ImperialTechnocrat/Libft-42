#include "../include/libft.h"

void*	ft_memmove(void* dest, const void* src, size_t num)
{
    unsigned char* d = (unsigned char*) dest;
    const unsigned char* s = (const unsigned char*) src;

    // Return NULL if either dest or src is NULL
    if (d == NULL || s == NULL) {
        return NULL;
    }

    // If destination is before source, copy forward
    if (d < s) {
        while (num--) {
            *d++ = *s++;
        }
    } else {
        // If destination overlaps source, copy backward
        d += num;
        s += num;
        while (num--) {
            *(--d) = *(--s);
        }
    }

    return dest;
}