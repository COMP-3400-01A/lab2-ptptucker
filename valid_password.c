#include <stddef.h>   // For NULL
#include <stdbool.h>  // For true/false
#include <ctype.h>    // For islower, isupper, isdigit

/**
 * Returns true if the password is:
 * - Between 6 and 10 characters long (inclusive)
 * - Contains only letters and digits
 * - Contains at least two lowercase letters
 * - Contains at least two uppercase letters
 */
bool valid_password(const char* s)
{
    if (s == NULL)
    {
        return false;
    }

    int length = 0;
    int lower = 0;
    int upper = 0;

    while (s[length] != '\0')
    {
        if (!islower(s[length]) && !isupper(s[length]) && !isdigit(s[length]))
        {
            return false;
        }

        if (islower(s[length]))
        {
            lower++;
        }

        if (isupper(s[length]))
        {
            upper++;
        }

        length++;
    }

    if (length < 6 || length > 10)
    {
        return false;
    }

    if (lower < 2 || upper < 2)
    {
        return false;
    }

    return true;
}
