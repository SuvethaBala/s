#include<stdio.h>
void main()
{
char ch='a'; 
printf("Input:%c",ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) 
{
printf("Alphabet");
}
else 
{
printf("No");
}
}
