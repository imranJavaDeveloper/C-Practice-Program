#include<stdio.h>
int main(){

    int year;
    printf("enter year");
    scanf("%d",&year);

    if(year%4==0){
        printf("this is leap year :"+year);
    }
    else{
        printf("this year is not leap year :",year);
    }
    return 0;
}