// Print the odd numbers less than 100
#include <stdio.h>

int main(){
      printf("the odd number less than 100\n");
 for(int n=1; n<=100; n++){
    if(n%2!=0){
      printf("%d\n", n);
  }
 }
 return 0;
}