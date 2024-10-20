// WAP that accepts the marks of 5 sujects and finals the sum and percentage marks obtained by the student.

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float sub1, sub2, sub3, sub4, sub5, percentage, sum;

    printf("Enter Subject Marks :");
    scanf("%f",&sub1);
    printf("Enter Subject Marks :");
    scanf("%f",&sub2);
    printf("Enter Subject Marks :");
    scanf("%f",&sub3);
    printf("Enter Subject Marks :");
    scanf("%f",&sub4);
    printf("Enter Subject Marks :");
    scanf("%f",&sub5);

    sum=sub1+sub2+sub3+sub4+sub5;

    percentage=sum/5;

    printf("\nSum of All Subjects are :%f",sum);
    printf("\nPercentage of All Subjects are :%f",percentage);

    getch();
}