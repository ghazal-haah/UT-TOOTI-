int check_login(USERS *headoflist, char *input_username, char *input_password)
{
    USERS *user = search_username(headoflist, input_username);
    int result = 0;
    if (user == 0)
    {
        return 0;
    }
    else
    {
        result = strcmp(user->password, input_password);
    }
    if (result == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}