#include <stdio.h>

int reverseNumber(int num) 
{
    int reversed = 0;

    while (num != 0) 
	{
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
        num /= 10; 
    }

    return reversed;
}

main() 
{
    int number;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) 
	{
        printf("Please enter a valid three-digit number.\n");
        return 1; 
    }

    int reversedNumber = reverseNumber(number);

    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}
