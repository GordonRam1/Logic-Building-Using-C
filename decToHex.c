#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d, r;
    printf(" Number you want to convert to hexadecimal");
    scanf("%d",&d);
    printf("\n\t\t\t");
    while(d>0)
    {
        r=d%16;
        d=d/16;
        if(r==10)
        {
            printf("\b\bA");
        }
        else if(r==11)
        {
            printf("\b\bB");
        }
        else if(r==12)
        {
            printf("\b\bC");
        }
        else if(r==13)
        {
            printf("\b\bD");
        }
        else if(r==14)
        {
            printf("\b\bE");
        }
        else if(r==15)
        {
            printf("\b\bF");
        }
        else
        {
         printf("\b\b%d",r);    
        }
        
    }
    printf("\n");
}