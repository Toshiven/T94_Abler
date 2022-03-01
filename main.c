#include <stdio.h>
#include <stdlib.h>
secondary(char,char,float,float,float,float);

int main()
{
    char option;
    char b;
    float cel, fahr, kel, ans, ret;
    printf("Input original temperature value: ");
    scanf("%f", &ans);
    printf("Value: %f\n", ans);

    ret = secondary(option, b, ans, cel, fahr, kel);
    printf("%f", ret);

    return 0;
}

int secondary(char option, char b, float ans, float cel, float fahr, float kel){

    printf("\nSelect original temperature scale:\n[c] for Celsius\n[f] for Fahrenheit\n[k] for Kelvin\n");
    scanf("%s%*c", &option);

    switch(option){
    case 'c':
        printf("\nSelect converted temperature scale:\n[f] for Fahrenheit\n[k] for Kelvin\n");
        scanf("%s%*c", &b);
        switch(b){
        case 'f':
            printf("\nCelsius to Fahrenheit\n");
            ans = (cel * 9/5)+ 32;
            break;
        case 'k':
            printf("\nCelsius to Kelvin\n");
            ans = (cel + 273.15);
            break;
        }
        break;
    case 'f':
        printf("\nSelect converted temperature scale:\n[c] for Celsius\n[k] for Kelvin\n");
        scanf("%s%*c", &b);
        switch(b){
        case 'c':
            printf("\nFahrenheit to Celsius\n");
            ans = (fahr - 32)* 5 / 9;
            break;
        case 'k':
            printf("\nFahrenheit to Kelvin\n");
            ans = (fahr - 32)* 5 / 9 + 273.15;
            break;
        }
        break;
    case 'k':
        printf("\nSelect converted temperature scale:\n[c] for Celsius\n[f] for Fahrenheit\n");
        scanf("%s%*c", &b);
        switch(b){
        case 'c':
            printf("\nKelvin to Celsius\n");
            ans = (kel - 273.15);
            break;
        case 'f':
            printf("\nKelvin to Fahrenheit\n");
            ans = (kel - 273.15)* 5 / 9 + 32;
            break;
        }
        break;
    }
    return ans;
}
