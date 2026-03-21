
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Rachel Sahay
 * ID: 201914077
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250.00;
   float ni_rate = 8.0;
   float tax_rate = 15.0;
   float tax_threshold = 12500.00;

    // calculate the deductions and final take-home salary
   float ni_contribution = salary * (ni_rate / 100);
   float salary_after_ni = salary - ni_contribution;
   float tax_contribution = (salary_after_ni - tax_threshold) * (tax_rate / 100);
   float take_home = salary_after_ni - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", ni_contribution);
   printf("Tax contribution £%.2f\n", tax_contribution);
   printf("Take home salary £%.2f\n", take_home);
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    return 0;
 }