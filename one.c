Write a C program to find maximum between two numbers.

#include<stdio.h>
void main()
{
int a,b;
printf("enter two numbers :  ");
scanf("%d,%d", &a,&b);
if(a>b)
{
printf("\nA is greatest");
}
else
{
printf("\nB is greatest");
}
}