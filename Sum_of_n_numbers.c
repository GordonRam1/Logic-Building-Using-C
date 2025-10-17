#include<stdio.h>
int main()
{   
    int n ,sum, i=0;
    printf("Enter a number under where you want to find sum of natural number");
    scanf("%d",&n);
    // while(i<=n)
    // {
    //     sum=sum+i;
    //     i++;
    // }
    // printf("%d",sum);
    // return(0);
    printf("%d",(n*(n+1))/2);
}