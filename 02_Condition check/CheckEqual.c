#include<stdio.h>
int main(){

    int number1 ,number2;
    printf("enter  first number");
    scanf("%d",&number1);
    printf("enter second number");
    scanf("%d",&number2)

    if(number1==number2){
        printf("number is equal");
    }
    else{
        printf("number is not equal");
    }
    return 0;
}