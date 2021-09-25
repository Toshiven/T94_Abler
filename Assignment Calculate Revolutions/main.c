#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3000, b = 360, c = 1, d = 60, e;

    e = a * b * c / d;
    printf("A spinning tire makes 3000 revolutions per minutes. Calculate How many degrees it rotate in one second. Then display the Degrees. \n");
    printf("---------------------------------------------------------- \n");
    printf("3000 revolutions per minute x 360° x 1 minute / 60 seconds \n");
    printf("degrees/second = %d \n", e, "°");

    return 0;
}
