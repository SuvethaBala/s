#include<stdio.h>
void main()
{
int n,n1,temp=0,c;
scanf("%d",&n);
c=n;
while(n>0)
{
n1=n%10;
temp=temp+(n1*n1*n1);
n=n/10;
}
if(temp==c)
{
printf("yes");
}
else
{
printf("no");
}
}
