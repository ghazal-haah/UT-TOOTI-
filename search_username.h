USERS *search_username(USERS *headoflist, char *input_username)
{
    USERS *temp = headoflist;
    while (1)
    {
        if (temp->next == NULL)
        {
            int result = strcmp(temp->username, input_username);
            if (result != 0)
            {
                temp = temp->next;
            }
            else
            {
                return temp;
            }
        }
        int result = strcmp(temp->username, input_username);
        if (result != 0)
        {
            return 0;
        }
        else
        {
            return temp;
        }
    }
}