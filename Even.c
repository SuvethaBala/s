#include<stdio.h>
void main()
{
int a; 
printf("Input:");
scanf("%d",&a) ;
if(a%2==0)
{
printf("Output:Even");
}
else if(a%2!=0)
{
printf("Output:Odd");
}
else
{
printf("invalid");
}
}
