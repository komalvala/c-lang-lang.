#include <stdio.h>
main() 
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &array[i]);
    }

    int min = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < min)
	    {
            min = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", min);

}
