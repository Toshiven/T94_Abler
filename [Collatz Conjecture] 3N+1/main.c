#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  printf("Type a number: ");
  scanf("%d", &i);

  while(i > 1){
    if(i % 2 == 0){ //for even numbers
      i = i / 2;
      printf("%d\n", i);
    }
    else{ //for odd numbers
      i = i * 3 + 1;
      printf("%d\n", i);
    }


  }
    return 0;
}
