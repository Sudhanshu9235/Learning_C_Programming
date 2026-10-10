// Calculate 10!

#include<stdio.h>
int main(){

  int factorial=1;
   for(int n=10; n>=1; n--){
   factorial*= n;
 }
  printf("--> the factorial of 10 = %d\n", factorial);
    
 return 0;
}