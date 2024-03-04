#include<stdio.h>
int main(){

    int number;
    printf("enter a number");
    scanf("%d",&number);

    if(number>0){
        printf("number is positive :",number);
    }
    else{
        printf("number is neagtive :",number);
    }
    return 0;
}