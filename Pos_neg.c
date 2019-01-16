#include <stdio.h>
void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0)
        printf("You entered a negative number.");
        
    else if ( number > 0)
        printf("You entered a positive number.");

    else
        printf("You entered 0.");
        
}
