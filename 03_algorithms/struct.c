#include <stdio.h>
#include <string.h>
#include <cs50.h>


typedef struct 
{
    string model;
    string year;
    string color;
} car;

int (void) 
{
    car cars[] = {
        {
            .model = "Toyota",
            .year = "2019",
            .color = "Red"
        },
        {
            .model = "Honda",
            .year = "2018",
            .color = "Blue"
        },
        {
            .model = "Ford",
            .year = "2017",
            .color = "Green"
        }
    }
    string model = get_string("Model: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(cars[i], model) == 0)
        {
            printf("Found %s\n", cars[i].model, cars[i].year, cars[i].color);
            return 0;
        }

}
    printf("Not found!\n");
    return 1;
} 