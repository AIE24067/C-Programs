Write a C program to find maximum between three numbers.

#include<stdio.h>
 int main()
{
int a,b,c;
printf("enter three number:\n");
scanf("%d %d %d",&a,&b,&c);

if (a>=b && a>=c){
 printf("%d is the maximum number:\n",a);
}
else if(b>=a && a>=c){
 printf("%d is the maximum number:\n",b);
}
else {
 printf("%d is the maximum number:\n",c);
}

return 0;

}
