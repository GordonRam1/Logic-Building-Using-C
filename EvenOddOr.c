#include<stdio.h>
int main()
{
    int num;
    printf("Enter num you want to check : ");
    scanf("%d",&num);
    if((num|1)!=num)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
}