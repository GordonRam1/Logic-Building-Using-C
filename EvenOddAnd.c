#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number you want to check is even or odd");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
}