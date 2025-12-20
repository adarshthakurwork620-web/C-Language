// Write a program to reverse a number using a for loop.
#include<stdio.h>
int main(){
    int i,num,rev=0;
    printf("enter the number to be reverse:");
    scanf("%d",&num);
    for(;num!=0; num/=10)
    rev=rev*10+(num%10);
    printf("%d of reverse number is %d",num,rev);
}