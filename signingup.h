void signingup(USERS *headoflist, char *input_username, char *input_password)
{
    USERS *temp = headoflist;
    while (1)
    {
        if (temp->next == NULL)
        {
            temp->next = (USERS *)malloc(sizeof(USERS));
            temp = temp->next;
            temp->username = (char *)malloc(sizeof(input_username));
            strcpy(temp->username, input_username);
            temp->password = (char *)malloc(sizeof(input_password));
            strcpy(temp->password, input_password);
            temp->post = (POSTS *)malloc(sizeof(POSTS));
            temp->post->next = NULL;
            temp->post->post_id = 0;
        }
        else
        {
            temp = temp->next;
        }
    }
}