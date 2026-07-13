#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc

/**
 * Creates a dynamically allocated array containing all even numbers
 * from begin to end (inclusive). Returns NULL if no such range exists.
 */
int* array_create_evens(int begin, int end)
{
    if (begin >= end)
    {
        return NULL;
    }

    // Find the first even number
    int first;
    if (begin % 2 == 0)
    {
        first = begin;
    }
    else
    {
        first = begin + 1;
    }

    if (first > end)
    {
        return NULL;
    }

    // Number of even numbers in the range
    int length = ((end - first) / 2) + 1;

    int *array = malloc(sizeof(int) * length);

    if (array == NULL)
    {
        return NULL;
    }

    // Fill the array with even numbers
    int value = first;
    for (int i = 0; i < length; i++)
    {
        array[i] = value;
        value += 2;
    }

    return array;
}
