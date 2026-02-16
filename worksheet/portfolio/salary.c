
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:
 * ID:
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    int salary = 36250;
    float NI = 0.08;
    float tax_rate = 0.2;

    // calculate the deductions and final take-home salary
    float NI_deduction = salary * NI;
    float tax_deduction = ((salary-NI_deduction) - 12500)  * tax_rate;
    float take_away_salary = salary - NI_deduction - tax_deduction;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%d",salary);
    printf("\nNI contribution £%.2f",NI_deduction);
    printf("\nTax contribution £%.2f",tax_deduction);
    printf("\nTake home salary £%.2f\n",take_away_salary);


    return 0;
 }