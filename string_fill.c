#include <stddef.h> // For NULL

/**
 * Fills the destination array with the given character and
 * ends the string with a null terminator.
 */
void string_fill(char dest[], int dest_cap, char c)
{
    if (dest == NULL)
    {
        return;
    }

    if (dest_cap <= 0)
    {
        return;
    }

    for (int i = 0; i < dest_cap - 1; i++)
    {
        dest[i] = c;
    }

    dest[dest_cap - 1] = '\0';
}
