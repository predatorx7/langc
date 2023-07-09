#include <stdio.h>
#include <stdlib.h>

int *fibonacci_sequence(int *size)
{
    int n = *size;
	// Allocate memory for the array.
	int *array = (int *)malloc(sizeof(int) * n);
	array[0] = 0;
	array[1] = 1;
	int current = 0;
	// Initialize the array elements.
	for (int i = 2; i < n; i++)
	{
		array[i] = array[i - 1] + array[i - 2];
	}

	return array;
}

int fibonacci_sequence_main()
{
	int size;
	scanf("%d", &size);
	int *sequence = fibonacci_sequence(&size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", sequence[i]);
        if (i != size - 1) {
            // print separator (i.e black space) between all numbers
            printf(" ");
        }
	}

	return 0;
}
