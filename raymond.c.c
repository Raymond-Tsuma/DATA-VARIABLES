/*
STUDENT NAME: RAYMOND NDORO 
ADM NO : D33-2402-2023
TASK: AREA OF RECTANGLE 
*/
#include<stdio.h>

int main(){
// use of float if decimal values are used i.e %f
// use of int for whole numbers i.e %d
    int length, width,area;
    printf("Program to find the area of rectangle: \n"); 

    printf("Enter the length: \n");
    scanf("%d",&length);

    printf("Enter the width:\n");
    scanf("%d",&width);

    area=length*width;

    printf("The area is %d", area);
    return 0;
    
    
}