// Find the maximum number in an array of numbers
#include <stdio.h>
int main (){
  int arr[6]= {30,56,580,40,100,20};
  int max = arr[0];
 
  for(int i=0; i<6; i++){
     if(arr[i]>max)
       max = arr[i];
  }
    printf("the maximum number in an array of numbers is '%d'.",max);
 return 0;
}