#include <stdio.h>
 int recgcd(int a, int b);
 int fungcd(int a,int b);
 int main(){
     int a,b,choice;
     do{
     printf("Enter a value for a: ");
     scanf("%d",&a);
     printf("Enter a value for b: ");
     scanf("%d",&b);
     printf("1.Using recursion \n");
     printf("2.USing non-recursive function \n");
     printf("Enter your choice: ");
     scanf("%d",&choice);
     switch (choice){
       case 1:
         printf("GCD of %d and %d is %d \n",a,b,recgcd(a,b));
         break;
        case 2:
         printf("GCD of %d and %d is %d \n",a,b,fungcd(a,b));
         break;
         default:
         printf("Enter a valid choice \n");
         break;
     }
     }while(choice<3);
 }
 
 int recgcd(int a,int b){
     int r=a%b;
     if(r!=0){
         return recgcd(b,r);
     }
     else{
         return b;
     }
 }
 
 int fungcd(int a,int b){
    int r;
    while(b!=0){
    r=a%b;
    a=b;
    b=r;
    }
    return a;
 }
 