int checklogsign(char *input_str) /*here we check if thr user is loging in or signig up*/
{
    char *str1 = "login";
    int result = 0;
    result = strcmp(input_str, str1); /*result=0 means the two strings are the same*/
    if (result == 0)
    {
        return 2;
    }
    if (result == 1) /*diffrent strings*/
    {
        char *str2 = "signup";
        result = strcmp(input_str, str2);
        if (result == 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}