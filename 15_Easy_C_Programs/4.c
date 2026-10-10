// Print all the multiplication tables with numbers from 1 to 10.

#include<stdio.h>

int main(){
  for(int i=1; i<=10; i++){
     printf("-----TABLE OF '%d'-----\n",i);
    for( int j=1; j<=10; j++){
      printf("%d x %d = %d\n",i,j,i*j);
    }
 }
  return 0;
}