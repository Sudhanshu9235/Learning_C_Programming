/* Create a function that receives an array of numbers as argument and returns an
array containing only the positive numbers */
#include<stdio.h>
int main(){
 int arr[10];
   printf("Enter element of array : \n");
   scanf("%d",&arr[0]);
   scanf("%d",&arr[1]);
   scanf("%d",&arr[2]);
   scanf("%d",&arr[3]);
   scanf("%d",&arr[4]);
   scanf("%d",&arr[5]);
   scanf("%d",&arr[6]);
   scanf("%d",&arr[7]);
   scanf("%d",&arr[8]);
   scanf("%d",&arr[9]);
 printf("array containing only the positive numbers : ");
 for(int i=0; i<10; i++){
   if(arr[i]>0){
     printf("%d\n",arr[i]);
   }
 }
 return 0;
}