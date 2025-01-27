#include<stdio.h>
void main (){
    int n;

    printf("Enter any number : ");
    scanf("%d",&n);

    if (n<0){
        n=n*(-1);
        printf("The absolute value %d",n);
    }
    else{
        printf("Absolute value :%d",n);
    }

}