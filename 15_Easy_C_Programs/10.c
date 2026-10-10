// Calculate the sum of numbers in an array of numbers
 # include <stdio.h>
 int main(){
  int arr[] = {10, 20, 30, 40, 50, 60};
    int length = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
  for(int i=0; i<length; i++){
   sum += arr[i];
}
  printf("Sum of number in an array of number : %d", sum);
 return 0;
}