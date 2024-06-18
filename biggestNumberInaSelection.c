// This program takes a list of numbers and outputs the largest one

#include <stdio.h>

int main(void)

{

    float current;
    float largest = 0.0f;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &current);

        if (current > largest)
        {
            largest = current;
        }
    } while (current != 0);

    printf("The largest number entered was %.2f", largest);

    return 0;
}