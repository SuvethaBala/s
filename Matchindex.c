#include<stdio.h>
void main()
{
long int arr[100000],n,i;
int f=0;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]==i)
{
f=1;
printf("\t %d",i);
}
}
if(f==0)
{
printf("-1");
}
}
