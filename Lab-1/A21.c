#include<stdio.h>
void main (){
    int c,d;

    printf("Enter no c :");
    scanf("%d",&c);
    printf("Enter no d :");
    scanf("%d",&d);

    c=c+d;
    d=c-d;
    c=c-d;

    printf("c:%d\nd:%d",c,d);
}