#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to check if even or odd : ");
    scanf("%d",&n);
    // Here i am using the and operator to check if the number is even or odd.
    if((n^1)==n+1)

    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }


}
