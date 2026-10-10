// Print the first 10 Fibonacci numbers without recursion
#include <stdio.h>
int main(){
  int f[10];
   f[0]=0, f[1]=1;
  printf("%d\n",f[0]);
  printf("%d\n",f[1]);
    for(int i=2; i<10; i++){
       f[i] = f[i-1] + f[i-2]   ;
  printf("%d\n",f[i]);
}
 return 0;
}