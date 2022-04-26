#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    char str[50];
    FILE *fptr;

    fptr = fopen("C:\\Users\\kevin\\Documents\\file.txt", "w");


    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Input thy stuff\n");

    printf(" Input the number of lines to be written : ");
    scanf("%d", &num);
    printf(" The lines are : \n");  
    for(int i = 0; i < num+1;i++)
    {
        fgets(str, sizeof(str), stdin);
        fprintf(fptr, "%s", str);
    }
   
   

    fclose(fptr);

return 0;
}