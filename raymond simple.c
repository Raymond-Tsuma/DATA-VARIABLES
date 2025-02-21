/*
 Student Name: Raymond Ndoro Tsuma 
 Student Reg No: D33-2402-2023
 Course Unit: BMS 201
 Student Year & Sem: 2.2
 Test Quiz:  SIMPLE INTEREST 
 */

// Program to find the area of Rectangle 
#include<stdio.h>

int main(){

    float principal_amount,time,rate, simple_interest;
    
    printf("Program to calculate the simple interest: \n"); 
    
    printf("Enter the principal amount: \n");
    scanf("%f",&principal_amount);
    
    printf("Enter the time in year:\n");
    scanf("%f",&time);
    
    printf("Enter the rate: \n");
    scanf("%f", &rate);
    
    simple_interest=(principal_amount*time*rate)/100;
    printf("The simple interest is %.2f", simple_interest);
    return 0;
    
    
}