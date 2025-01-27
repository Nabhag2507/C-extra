#include<stdio.h>
void main (){
    float principalAmount,discount;

    printf("Enter the price of thing :");
    scanf("%f",&principalAmount);

    printf("Entre discount in percentage :");
    scanf("%f",&discount);

    printf("Your discount is %f and amount to be paid is %f",(principalAmount*discount/100),(principalAmount-(principalAmount*discount/100)));
}