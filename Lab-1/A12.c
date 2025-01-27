#include<stdio.h>

void main (){
    int p,t;
    float r;

    printf("What is principal amount :");
    scanf("%d",&p);
    printf("What is Rate of Interest :");
    scanf("%f",&r);
    printf("What is Time limit in year :");
    scanf("%d",&t);

    float si = (p * r * t) / 100;

    printf("You have to pay debt %f and total is %f",si,(si+p));
}