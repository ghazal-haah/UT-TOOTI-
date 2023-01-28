void information(USERS *headoflist, char *input_username)
{
    USERS *user = search_username(headoflist, input_username);
    printf("USERNAME = %s", user->username);
    printf("PASSWORD = %s", user->password);
    POSTS *head_POST = user->post->next;
    if (head_POST->next == NULL)
    {
        printf("POSTID = %d", head_POST->post_id);
        printf("POSTLIKE = %d", head_POST->like);
        printf("TEXT = %s", head_POST->text);
    }
    else
    {
        printf("POSTID = %d", head_POST->post_id);
        printf("POSTLIKE = %d", head_POST->like);
        printf("TEXT = %s", head_POST->text);
        head_POST = head_POST->next;
    }
}