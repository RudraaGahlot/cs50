#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *s = "hi!";
    char *t = s;
    
    t[0] = toupper(t[0]);
    printf("%s\n", t);
     printf("%s\n", s); 
}