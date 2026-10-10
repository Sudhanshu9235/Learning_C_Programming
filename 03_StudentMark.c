#include<stdio.h>
int main(){
int Math, Science, English, Hindi, Sanskrit, SocialScience ;
int TotalMark;
int MaxMark = 600;


printf("---UP Board Class 10th Mark Calculator.---\n\n");

printf("Enter Math Mark: ");
scanf("%d", &Math);
printf("Enter Science Mark: ");
scanf("%d", &Science);
printf("Enter English Mark: ");
scanf("%d", &English);
printf("Enter Hindi Mark: ");
scanf("%d", &Hindi);
printf("Enter Sanskrit Mark: ");
scanf("%d", &Sanskrit);
printf("Enter SocialScience Mark: ");
scanf("%d", &SocialScience);
 
TotalMark = Math + Science + English + Hindi + Sanskrit + SocialScience;

printf("\nTotal Mark Obtained : %d\n", TotalMark );
printf("Total Maximum Mark  : %d\n", MaxMark);

printf("Total Presentage  : %.2f\n", ((float)TotalMark/MaxMark) * 100 );


return 0;
}

