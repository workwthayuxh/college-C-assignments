#include <stdio.h>
#include <math.h>

// Function to calculate Simple Interest
float calculate_simple_interest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

// Function to calculate Compound Interest
float calculate_compound_interest(float principal, float rate, float time) {
    return principal * pow((1 + rate / 100), time) - principal;
}

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    // Input from user
    printf("Enter the Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = calculate_simple_interest(principal, rate, time);

    // Calculate Compound Interest
    compound_interest = calculate_compound_interest(principal, rate, time);

    // Display results
    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
