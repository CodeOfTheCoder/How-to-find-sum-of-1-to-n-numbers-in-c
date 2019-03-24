//how to find sum of 1 to n numbers..
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum;
	clrscr();

	printf("\n Enter n number:");
	scanf("%d",&n);

	sum=n*(n+1)/2;

	printf("\nSUM =%d",sum);

	getch();
}