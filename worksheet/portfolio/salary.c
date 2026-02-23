
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:
 * ID:
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250;
    float NI = 0.08;
    float tax_rate = 0.15;

    // calculate the deductions and final take-home salary
    float NI_deduction = salary * NI;
    float tax_deduction = ((salary-NI_deduction) - 12500)  * tax_rate;
    float take_away_salary = salary - NI_deduction - tax_deduction;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_deduction);
    printf("Tax contribution £%.2f\n",tax_deduction);
    printf("Take home salary £%.2f\n",take_away_salary);


    return 0;
 }