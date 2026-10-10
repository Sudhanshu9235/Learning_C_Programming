// Create a function that will convert from Fahrenheit to Celsius
#include<stdio.h>
int main(){
  float F, C;
 printf("Enter Fahrenheit Value :");\
 scanf("%f", &F);
   C = (F-32)*5/9;
 printf("Celsius Value : %.1f",C);
 return 0;
}