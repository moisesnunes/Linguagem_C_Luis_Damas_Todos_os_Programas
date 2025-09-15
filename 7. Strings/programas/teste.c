char *repeticoes(char *s)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (strcountc(s, s[i]) > 1) /* Ocorre mais que 1 vez */
            s[j++] = s[i];
    s[j] = '\0';
    return s;
}
