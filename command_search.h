int command_search(char *input_str)
{
    char *temp_str = "like";
    int result = 0;
    result = strcmp(input_str, temp_str);
    if (result == 0)
    {
        return 2;
    }
    temp_str = "post";
    result = strcmp(input_str, temp_str);
    if (result == 0)
    {
        return 1;
    }
    temp_str = "info";
    result = strcmp(input_str, temp_str);
    if (result == 0)
    {
        return 5;
    }
    temp_str = "logout";
    result = strcmp(input_str, temp_str);
    if (result == 0)
    {
        return 3;
    }
    temp_str = "delete";
    result = strcmp(input_str, temp_str);
    if (result == 0)
    {
        return 4;
    }
    temp_str = "find_user";
    result = strcmp(input_str, temp_str);
    if (result == 0)
    {
        return 6;
    }
    else
    {
        return 0;
    }
}
