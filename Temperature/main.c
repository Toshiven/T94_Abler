#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("input temperature : ");
    scanf("%d", &num);

    if (num < 0)
    {
    printf("Freezing weather \n");
    }

    else if (num < 10)
    {
    printf("Very cold weather \n");
    }

    else if (num < 20)
    {
    printf("Cold weather \n");
    }

    else if (num < 30)
    {
    printf("Normal Temperature \n");
    }

    else if (num < 40)
    {
    printf("Its hot \n");
    }

    else if (num >= 40)
    {
    printf("Its really hot \n");
    }

    else
    {
    printf("Error");
    }


    return 0;
}
