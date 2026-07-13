#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc
#include <ctype.h>  // For toupper

/**
 * Returns a newly allocated string with all lowercase letters
 * converted to uppercase.
 */
char* capitalize(const char* s)
{
    if (s == NULL)
    {
        return NULL;
    }

    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    char *result = malloc(sizeof(char) * (length + 1));

    if (result == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < length; i++)
    {
        result[i] = toupper((unsigned char)s[i]);
    }

    result[length] = '\0';

    return result;
}
