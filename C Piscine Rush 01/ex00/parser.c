#include <stdlib.h>
char    *read_arguments(char *arguments)
{
    char *headers;
    int i;

    headers = (char*) malloc(16);
    i = 0;
    while(i < 31 && arguments[i] != '\0')
    {
        headers[i/2] = arguments[i];
        i+=2;
    }
    return headers;
}