// this is the underneeth the hood of pre-defined library which has a function called strlen.

#include <stdio.h>
#include <string.h>

// int string_length(string s); 

int main() {
    string name = get_string("Name: ");
    int length = strlen(name);

    printf("%i\n", length);
    return 0;
}

// int string_length(string s)
// {
//     int n = 0;
//     while(s[n] != '\0')
//     {
//         n++;
//     }
    
//    return n;

// }

