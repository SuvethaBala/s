#include<stdio.h>
void main()
{
int sum=0,n,k,a[15],i=1;
scanf("%d",&n); 
scanf("%d",&k); 
while(i<=n) 
{
scanf("%d",&a[i]);
i++;
}
while(i<=k) 
{
sum=sum+a[i];
i++;
}
printf("%d",sum); 
}
