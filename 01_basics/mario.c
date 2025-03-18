#include <stdio.h>

int main () {
    int n = 3;
    for (int row = n; row >= 1; row--){
        for (int col = row; col > 0; col--){
            printf("#");
        }
        printf("\n");
    }
}

// row -> 1, 1 <= 3
// col -> 2, 2 < 3

// ##



