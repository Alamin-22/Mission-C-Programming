// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char Db_Email[] = "mr.mollik@gmail.com";
//     char Db_Pass[] = "mollik@admin";

//     char User_Email[30];
//     char User_pass[50];

//     printf("Enter Your Email Address =>>  ");
//     scanf("%s", &User_Email);
//     printf("Enter Your Password =>  ");
//     scanf("%s", &User_pass);

//     int is_Email_Matched = strcmp(Db_Email, User_Email);
//     int is_pass_Matched = strcmp(Db_Pass, User_pass);

//     if (is_Email_Matched == 0 && is_pass_Matched == 0)
//     {
//         printf("Congratulation Your are successfully logged In");
//     }
//     else
//     {

//         printf("Email or Password is incorrect Please try again with actual credentials");
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char Db_Email[] = "aditya@gmail.com";
    char Db_pass[] = "Sumona";

    char user_Email[30];
    char user_pass[50];

    printf("entar your email address: ");
    scanf("%s", &user_Email);

    printf("entar your password: ");
    scanf("%s", &user_pass);

    int is_Email_Matched = strcmp(Db_Email, user_Email);
    int is_Pass_Matched = strcmp(Db_pass, user_pass);

    if ((is_Email_Matched == 0) && (is_Pass_Matched == 0))
    {
        printf("you are logged in");
    }

    else

    {
        printf("FUCK YOU");
    }

    return 0;
}