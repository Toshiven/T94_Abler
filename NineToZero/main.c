#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j, N = 10;

for(i=N-1; i>=1; i--)

    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
