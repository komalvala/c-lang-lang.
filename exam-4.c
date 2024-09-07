#include <stdio.h>

void squareArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++) 
	{
        *(arr + i) = (*(arr + i)) * (*(arr + i)); 
    }
}

int main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    squareArray(arr, n);

    printf("The squared elements are:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}