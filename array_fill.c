#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 */
int array_fill(int* array, int array_len, int begin, int end) {
    int count = 0;

    for (int i = begin; i <= end && count < array_len; i++)
    {
        array[count] = i;
        count++;
    }

    return count;
}
}
