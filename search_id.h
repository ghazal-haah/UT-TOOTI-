POSTS *search_id(POSTS *post, int POST_ID)
{
    POSTS *temp = post;
    while (1)
    {
        if (temp->next->post_id == POST_ID)
        {
            return temp;
        }
        else
        {
            temp = temp->next;
            if (temp->next == NULL)
                return NULL;
        }
    }
}