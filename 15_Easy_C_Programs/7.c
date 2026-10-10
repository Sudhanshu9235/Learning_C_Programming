// Calculate the sum of even numbers greater than 10 and less than 30
 #include<stdio.h>
int main(){
   int sum=0;
  for( int i=11; i<30; i++){
    if(i%2==0){
       printf("even number : %d\n",i);
      sum += i;
    }  
  }
 printf("the sum of even numbers greater than 10 and less than 30 = %d\n",sum);
 return 0;
}