char *postcontent()
{
    char *txt;
    char c;
    int i = 0;
    txt = (char *)malloc(sizeof(char) * 100);
    if (i > 100)
    {
        txt = (char *)realloc(txt, sizeof(char) * i);
    }
    else
    {
        c = getchar();
        if (c == '\n')
        {
            return txt;
        }
        else
        {
            *(txt + i) = c;
            i++;
        }
    }
}
