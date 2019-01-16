#include<stdio.h>
void main()
{
int a; 
printf("Enter the num");
scanf("%d",&a) ;
if(a%2==0)
{
printf("Even");
}
else if(a%2!=0)
{
printf("Odd");
}
else
{
printf("invalid");
}
}
