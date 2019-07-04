#include <stdio.h>
int main(void)
{
  int i;

  for(i = 1; i <= 15; i++){
    if(i == 15){
      printf("FizzBazz\n");
    }
    else if(i % 3 == 0){
      printf("Fizz\n");
    }
    else if(i % 5 == 0){
      printf("Bazz\n");
    }
    else {
      printf("%d\n", i);
    }
  }
  
  return(0);
}
 
