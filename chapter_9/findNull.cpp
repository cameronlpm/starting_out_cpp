// findNull locates the null terminator that appears at the end of a string,
// and returns a pointer to it.
char *findNull(char *str)
{
    char *ptr = str;

    while (*ptr != '\0')
        ptr++;
    return ptr;
}