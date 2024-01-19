// Program to check your aligible for vote or not.


#include<stdio.h>

int main(){
    int age;
    printf("Enter your age :  ");
    scanf("%d" , &age);
    
    if(age >= 18){
        printf("Your eligible for vote");
    }
    else{
        printf("Your not eligible for vote , Wait for %d years." ,18 - age);
    }
   
   return 0;
}