#include <stddef.h> // For NULL

/**
 * Appends src2 to the end of src1 without exceeding src1_cap.
 * Ensures src1 remains null-terminated.
 */
void string_concat(char* src1, int src1_cap, const char* src2)
{
    if (src1 == NULL || src2 == NULL)
    {
        return;
    }

    int i = 0;

    // Find the end of src1
    while (i < src1_cap && src1[i] != '\0')
    {
        i++;
    }

    int j = 0;

    // Copy characters from src2
    while (src2[j] != '\0' && i < src1_cap - 1)
    {
        src1[i] = src2[j];
        i++;
        j++;
    }

    // Null-terminate the result
    if (src1_cap > 0)
    {
        src1[i] = '\0';
    }
}
