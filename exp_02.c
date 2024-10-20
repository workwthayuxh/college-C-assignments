//WAP that calculates the Simple Interest and Compound Interest. The Principle Amount, Rate of Interest and time are entered through the keyboard.

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float principle, simple, compound, rate, time;

    printf("Enter Principle Amount :");
    scanf("%f",&principle);
    printf("Enter Rate of Interest :");
    scanf("%f",&rate);
    printf("Enter Time :");
    scanf("%f",&time);

    simple=(principle*rate*time)/100;

    compound=principle*pow((1+(rate/100)),time)-principle;

    printf("Simple Interest is :%f",simple);
    printf("\nCompound Interest is :%f",compound);
    
    getch();
}