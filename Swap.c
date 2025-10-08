#include<stdio.h>
int main()
{
    // using 3rd variable
    int a,b,c;
    a=30;
    b=20;
    c=a;
    a=b;
    b=c;
    printf("a is %d and b is %d",a,b);
    printf("\n");
    // without using 3rd variable
    // You shouldnt mess with input  instead create  new variable 
    //it is safer not not tamper with original data(but you can do othis also)
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d and b is %d",a,b);
    printf("\n");

    // you can also use XOR to do this

    a=a^b;
    b=a^b;
    a=a^b;
    printf("a is %d and b is %d",a,b);
    printf("\n");



}