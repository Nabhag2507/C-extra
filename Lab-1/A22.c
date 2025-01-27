#include<stdio.h>
#include<math.h>
void main (){
    int a,c,b;

    printf("Enter side no 1 of triangle :");
    scanf("%d",&a);
    printf("Enter side no 2 of triangle :");
    scanf("%d",&b);
    printf("Enter side no 3 of triangle :");
    scanf("%d",&c);

    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of triangle is %.2f",area);
}