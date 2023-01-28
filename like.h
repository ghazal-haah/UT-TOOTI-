int like(USERS *headoflist, char *input_username, int POSTID)
{
    USERS *user = search_username(headoflist, input_username);
    POSTS *post = NULL;
    while (1)
    {
        if (user == 0)
        {
            printf("THE INPUT USERNAME IS NOT AVAILABE !\n");
            printf("PLEASE TRY AGAIN!\n");
            return 0;
        }
        else
        {
            post = search_id(user->post, POSTID);
            if (post == NULL)
            {
                printf("THE INPUT POSTID IS NOT AVALABLE !\n");
            }
        }
    }
    post->next->like++;
}