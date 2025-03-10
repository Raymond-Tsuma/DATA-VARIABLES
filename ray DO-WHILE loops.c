/*
 Author: Raymond Ndoro Tsuma 
 Reg No: D33-2402-2023
 Course Unit: BMS 201
 Student Year & Sem: 2.2
 
 */

// do-while Loops 

    
#include <stdio.h>

int main() {
int i=1; //start 
do{

printf("The number is: %d  and the cube of the %d is: %d \n",i,i,i*i*i);
i++; //step
}
while (i<=100); //stop 

//sum+= i;

//printf("The sum is %d \n",sum);
return 0;
}