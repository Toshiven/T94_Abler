#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price, choice, a;

    printf("Select your order \n");
    printf("[1] Milk(P50) \n");
    printf("[2] Chocolate(P100) \n");
    printf("[3] Coca Cola(P45) \n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Input payment: ");
        scanf("%d", &price);
        if (price < 50)
        {
            printf("You don't have enough funds.");
        }
        else
        {
        a = price - 50;
        printf("You have purchased Milk. \n");
        printf("Change: %d", a);
        }
        break;

        case 2:
        printf("Input payment: ");
        scanf("%d", &price);
        if (price < 100)
        {
            printf("You don't have enough funds.");
        }
        else
        {
        a = price - 100;
        printf("You have purchased Chocolate. \n");
        printf("Change: %d", a);
        }

        break;

        case 3:
        printf("Input payment: ");
        scanf("%d", &price);
        if (price < 45)
        {
            printf("You don't have enough funds.");
        }
        else
        {
        a = price - 45;
        printf("You have purchased Coca Cola. \n");
        printf("Change: %d", a);
        }
        break;

        default: printf("Invalid Input");
        break;
    }

    return 0;
}
