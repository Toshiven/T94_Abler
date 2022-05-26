#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n;
    const int buf_size = 50;
    char buf[buf_size];
    char name[50];
    int ID;
    float math, english, science, sum, average;

    printf("Enter number of students: ");
	scanf("%d",&n);

    for (int i = 0; i < n; ++i) {
        int a = snprintf(buf, buf_size, "student_%d.txt", i+1);
        

        FILE *fptr = fopen(buf, "w+");

        if(fptr == NULL)
        {
            printf("Error!");
            exit(1);
        }

        printf("For student %d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter ID number: ");
		scanf("%d",&ID);
		printf("Enter math grade: ");
		scanf("%f",&math);
        printf("Enter science grade: ");
        scanf("%f",&science);
        printf("Enter english grade: ");
        scanf("%f",&english);

        sum = math + science + english;
        average = sum / 3;
        fprintf(fptr,"Student %d\nName: %s \nID number: %d \n Math Grade: %.2f \n Science Grade: %.2f \n English Grade: %.2f \n Total Grade: %.2f \n Grade Average: %.2f \n", i+1, name,ID, math, science, english, sum, average);

        fclose(fptr);
    }
}
	
	