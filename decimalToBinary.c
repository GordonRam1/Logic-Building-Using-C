#include<stdio.h>
int main()
{   
    int d,r;
    printf("Enter decimal number :");
    scanf("%d",&d);
    printf("\n\t\t\t\t\t");
    while(d>0)
    {
        r=d%2;
        d=d/2;
        printf("\b\b%d",r);
    }

}