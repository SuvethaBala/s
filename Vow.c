#include <stdio.h>
 
void main()
{
  char ch;
 
  printf("Input:\n");
  scanf("%c", &ch);
 
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("Vowel", ch);
  else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch >= 'Z')) 
    printf("Consonant", ch);
  else
    printf("invalid");
}
