#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to check if even or odd : ");
    scanf("%d",&n);
    if((n^1)==n+1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

}