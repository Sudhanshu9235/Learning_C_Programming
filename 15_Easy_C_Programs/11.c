// Calculate the average of the numbers in an array of numbers
# include<stdio.h>
int main(){
  int arr[5];
  int length = sizeof(arr)/sizeof(arr[0]);
  int sum = 0;

   printf("Enter number for array :---\n");
  scanf("%d",&arr[0]);
  scanf("%d",&arr[1]);
  scanf("%d",&arr[2]);
  scanf("%d",&arr[3]);
  scanf("%d",&arr[4]);

 
for(int i=0; i<5; i++){
  sum += arr[i];
 }
printf("the average of the numbers in an array of numbers: %.2f", (float)sum/length);

 return 0;
}