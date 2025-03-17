#include <stdio.h>
#include <cs50.h>
// int main(){
//     // while loop
//     int i = 0;
//     while (i < 10) {
//         printf("meow\n");
//         i++;
//     }

//     // for loop
//     for (int i = 0; i < 10; i++){
//         printf("meow\n");
//     }

// }

// void meow(int n);


// int main () {
//     meow(4);
// }

// void meow(int n) {
//     for (int i = 0; i < n; i++){
//         printf("meow\n");
//     }
// }

int get_positive_integer(void);
void meow(int n);

int main (){
    int times = get_positive_integer();
    meow(times);
}

int get_positive_integer(void) {
    int n;
    do 
    {
        n = get_int("Number: ");
    }
    while(n < 1);
    return n;
}

void meow(int n){
    for (int i = 0; i < n; i++){
        printf("meow\n");
    }
}
