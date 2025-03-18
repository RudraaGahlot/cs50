// Average of numbers using const int, helper function.
#include <stdio.h>
#include <cs50.h> 

// constant
const int N = 3;

// helper function

float average(int length, int array[]);

int main ()
{
    int score[N];

    for (int i = 0; i < N; i++)
    {
        score[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, score));
}

float average(int length, inr array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum/ (float) length;
}
