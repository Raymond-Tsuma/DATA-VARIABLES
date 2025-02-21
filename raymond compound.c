// Programm to find the compound interest 
/*
STUDENT NAME: RAYMOND NDORO 
ADM NUMBER: D33-2402-2023
    
    */
    #include <stdio.h>
#include <math.h>

int main() {
    double principle, rate, time, compound_interest, total_amount;
    int n;

    printf("Program to find the compound interest: \n");

    printf("Enter the given principle amount: \n");
    scanf("%lf", &principle);  // Use of long float 

    printf("Enter the annual rate of interest (in percentage): \n");
    scanf("%lf", &rate);  // 

    printf("Enter the given time period (in years): \n");
    scanf("%lf", &time);  // 

    printf("Enter the number of times interest is compounded per year: \n");
    scanf("%d", &n);

    // Converting the rate into decimal 
    rate = rate / 100;

    // Calculating the total amount
    total_amount = principle * pow((1 + rate / n), (n * time));

    // Calculating compound interest
    compound_interest = total_amount - principle;

    printf("The Compound Interest is: %.2f\n", compound_interest);
    printf("Total Amount: %.2f\n", total_amount);

    return 0;
}
