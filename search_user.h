int search_user(USERS *headoflist, char *input_username)
{
    USERS *user = search_username(headoflist, input_username);
    if (user == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}