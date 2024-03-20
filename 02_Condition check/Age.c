#include<stdio.h>
int main(){

    int number;
    printf("enter your age");
    scanf("%d",&number);

    if(age>=18){
        printf("your age is :",age);
        printf("you can drive");
        printf("you can vote");
        printf("you can go out of india");
    }
    else{
        printf("your are under 18 :",age);
    }
    return 0;
}