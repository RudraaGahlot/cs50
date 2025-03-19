#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 100, 500, 1, 40, 50};
    int target = 50;

    for(int i = 0; i < 6; i++)
    {
        if(numbers[i] == target)
        {
            printf("Found it!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}