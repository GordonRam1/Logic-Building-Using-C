#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int d, r;
	printf("Enter the demical you want converted to Octal: ");
	scanf("%d",&d);
	printf("\t\t\t");
	while(d>0)
	{
	r=d%8;
	d=d/8;
	printf("\b\b%d",r);
	}
return(0);
	
}


