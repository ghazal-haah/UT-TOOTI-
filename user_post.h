void user_post(USERS *headoflist, char *input_username, char *input_password)
{
    USERS *user = search_username(headoflist, input_username);
    int i = 0;
    POSTS *post_head = user->post;
    while (post_head->next == NULL)
        headoflist = headoflist->next;
    post_head->next = (POSTS *)malloc(sizeof(POSTS));
    post_head = post_head->next;
    post_head = (POSTS *)malloc(sizeof(input_password));
    strcpy(post_head->text, input_password);
    post_head->post_id = i;
    post_head->like = 0;
    post_head->next = NULL;
}