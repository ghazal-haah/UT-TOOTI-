int post_ID(char *string)
{
    char c;
    int i = 0, POST_ID = 0;
    while (1)
    {
        c = *(string + i);
        if (c == '\0')
        {
            return POST_ID;
        }
        else
        {
            POST_ID *= 10;
            POST_ID = c - 48;
        }
    }
}