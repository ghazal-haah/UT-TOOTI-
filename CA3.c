#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*functions*/
#include "checklogsign.h"
#include "get_string.h"
#include "signingup.h"
#include "check_login.h"
#include "like.h"
#include "user_post.h"
#include "command_search.h"
#include "search_user.h"
#include "search_id.h"
#include "post_id.h"
#include "postcontent.h"
#include "deletepost.h"
#include "information.h"
#include "search_username.h"

/*structs*/
typedef struct post POSTS;
typedef struct user USERS;

typedef struct post
{
    char *text;
    int post_id;
    int like;
    POSTS *next;
} POSTS;

typedef struct user
{
    char *username;
    char *password;
    POSTS *post;
    USERS *next;
} USERS;

int main()
{
    struct post;
    struct user *headoflist;
    char *input_str1;
    char *input_str2;
    char *input_str3;
    int POST_ID;
    int command = 0;
    printf("Do you already have an acount on UTTOOTI ? login!\n");
    printf("Else if you should signup :)\n");
    input_str1 = get_string();
    command = checklogsign(input_str1);
    while (1)
    {
        switch (command)
        {
        case 0:
            printf("Order Undefined ! Please try again ;)\n");
            break;
        case 1:
            input_str1 = get_string();
            command = search_user(headoflist, input_str1);
            if (command == 0)
            {
                input_str2 = get_string();
                signingup(headoflist, input_str1, input_str2);
            }
            else
            {
                printf("This username has already been taken !\n");
            }
            break;
        case 2:
            input_str2 = get_string();
            command = check_login(headoflist, input_str1, input_str2);
            if (command == 0)
            {
                printf("Oh Sorry ! your username/password is incorrect !\n");
            }
            else
            {
                printf("User logged in as %s", input_str1);
                printf("What do you want to do?\n");
                input_str2 = get_string();
                command = command_search(input_str1);
            }
            break;
        default:
            break;
        }
    }
    while (1)/*diffrent commands from the user do diffrent things we have all commands in here!*/
    {
        switch (command)
        {
        case 0:
            printf("ORDER UNDEFINED!\n");
            break;
        case 1:
            input_str1 = postcontent();
            user_post(headoflist, input_str1, input_str2);
        case 2:
            input_str2 = get_string();
            input_str3 = get_string();
            POST_ID = post_ID(input_str3);
            like(headoflist, input_str2, POST_ID);
        case 3:
            printf("USER LOGGED OUT\n");

        case 4:
            input_str2 = get_string();
            POST_ID = post_ID(input_str2);
            deletepost(headoflist, input_str1, POST_ID);

        case 5:
            information(headoflist, input_str1);
        case 6:
            input_str2 = get_string();
            search_user(headoflist, input_str2);
        default:
            break;
        }
    }
}