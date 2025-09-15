char *wordupr(char *s)
{
    int i;
    s[0] = toupper(s[0]); /* O primeiro fica sempre em maiúscula */
    for (i = 1; s[i - 1] != '\0'; i++)
        if (s[i - 1] == ' ') /* Se o caractere anterior for um espaço */
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    return s;
}
