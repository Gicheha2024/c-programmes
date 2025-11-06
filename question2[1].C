
/*Name: Patrick Nyanjui 
registration number:CT101/G/28857/25
Description:CAT2 Q2 
*/
#include <stdio.h>

int main() {
    float hours, rate;
    float grossPay, taxes, netPay;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours > 40)
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        grossPay = hours * rate;

    // Calculate taxes
    if (grossPay <= 600)
        taxes = 0.15 * grossPay;
    else
        taxes = (0.15 * 600) + (0.20 * (grossPay - 600));

    // Calculate net pay
    netPay = grossPay - taxes;

    // Output
    printf("\n--- PAY SUMMARY ---\n");
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
