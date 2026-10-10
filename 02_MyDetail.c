#include<stdio.h>

int main(){
    char name[50];
    char fathername[50];
    char email[100];
    int age;
    char city[50];
    
    printf("Enter name: ");
    scanf("%49s", name);
    printf("Enter father's name: ");
    scanf("%49s", fathername);
    printf("Enter email address: ");
    scanf("%99s", email);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter city: ");
    scanf("%49s", city);

    
    printf("Name : %s\n", name);
    printf("Father's Name : %s\n", fathername);
    printf("Email Address : %s\n", email);
    printf("Age : %d\n", age);
    printf("City : %s\n", city);

    return 0;
}