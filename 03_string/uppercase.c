// sefl implementation of ctype.h library pre-defined function called toupper(). just to know what is going on underneeth the hood.


#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        } 
        else 
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");
}