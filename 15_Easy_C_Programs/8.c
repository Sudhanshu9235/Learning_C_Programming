// Create a function that will convert from Celsius to Fahrenheit
 #include<stdio.h>
 int main(){
   float C,F;
  printf("Enter Celsius Value: ");
  scanf("%f",&C);

    F = (C*9/5)+32;
  printf("Fahrenheit Value : %.1f\n",F);
    
 return 0;
}