/*
 * Calculates the remaining balance on a loan after 1st, 2nd, 3rd payment. 
 * K.N King's C Programming: A Modern Approach. 
 * Program Projects.
 * By Farshad Mirzaiee
 */

#include <stdio.h>

#define MONTHS_PER_YEAR 12

int main(void)
{
    float amount, interest_rate, payment; 
    float balance, monthly_interest, interest;
    float balance_2, balance_3;
    

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interst rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_interest = interest_rate / 100.0f / MONTHS_PER_YEAR ;

   

    balance = amount + amount * monthly_interest - payment;
    balance_2 = balance + balance * monthly_interest - payment;
    balance_3 = balance_2 + balance_2 * monthly_interest - payment;

    printf("Balance remaining after first payment: %.2f\n", balance);
    printf("Balance remaining after second payment: %.2f\n", balance_2);
    printf("Balance remaining after third payment: %.2f\n", balance_3);
    
    

    return 0;
}

/*
 * 
 * this is the first version i coded with some mistakes: 

#include <stdio.h>

#define MONTH 12

int main(void)
{
    float amount, interest_rate, payment; 
    float balance, monthly_interest, interest;
    float balance_2, balance_3;
    

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interst rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    interest = interest_rate / 100.0f;
    monthly_interest = interest / MONTH * amount;

   

    balance = amount + monthly_interest - payment;
    balance_2 = balance + monthly_interest - payment;
    balance_3 = balance_2 + monthly_interest - payment;

    printf("Balance remaining after first payment: %.2f\n", balance);
    printf("Balance remaining after second payment: %.2f\n", balance_2);
    printf("Balance remaining after third payment: %.2f\n", balance_3);
    
    

    return 0;
}


 
 */