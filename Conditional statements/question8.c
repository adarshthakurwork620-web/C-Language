//find the factorial of a number??...
#include<stdio.h>
int main(){
    int number,fact=1;
    printf("enter number:");
    scanf("%d",&number);
    for (  int i = number ; i>0; i--)
    {
        fact=i*fact;
    }
    printf("%d",fact);
}
    
    