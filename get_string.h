char *get_string() /*here we take the input strings*/
{
    char c;
    int i = 0, size = 10;
    char *string = (char *)malloc(sizeof(char) * 10);
    while (1)
    {
        c = getchar();
        if (c == ' ' || c == '\n')
        {
            *(string + i) = '\0';
            return string;
        }
        if (size <= i + 1)
        {
            size += 10;
            string = (char *)realloc(string, sizeof(char) * size);
        }
        else
        {
            *(string + i) = c;
        }
        i++;
    }
}