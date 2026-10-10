#include<stdio.h>
int main(){
  for (int i=50; i<=150; i++){
   if((i%3==0 && i%8!=0)||(i%8==0 && i%3!=0)){
    printf("%d\n",i);
   }
}
 return 0;
}