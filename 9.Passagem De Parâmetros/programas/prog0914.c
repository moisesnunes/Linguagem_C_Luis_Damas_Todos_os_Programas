#include <stdio.h>
#include <string.h>

char *rec_strcat(char *dest, char *orig)
{
    if (*dest == '\0')
        return strcpy(dest, orig);
    return rec_strcat(dest + 1, orig) - 1;
}

main()
{
    char s[1000];
    gets(s); // aviso: the `gets' function is dangerous and should not be used c11
    puts(rec_strcat(s, "OLA"));
}
