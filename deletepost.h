void deletepost(USERS *headoflist, char *input_username, int POST_ID)
{
    USERS *user = search_username(headoflist, input_username);
    POSTS *post = NULL;
    post = search_id(user->post, POST_ID);
    if (post == NULL)
    {
        printf("POSTID IS NOT AVAILABLE !\n");
        printf("PLEASE TRY AGAIN ;)\n");
    }
    else
    {
        post->next = post->next->next;
    }
}