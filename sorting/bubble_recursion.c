#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

void num_generator(int *arr, int len);
void bubble_recursion(int *arr, int len);
void sort_printf(int *arr, int len);

int main(void)
{
	int arr[SIZE];
	
	num_generator(arr, SIZE);

	bubble_recursion(arr, SIZE);

	sort_printf(arr, SIZE);

	return EXIT_SUCCESS;
}

void num_generator(int *arr, int len)
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}

	return;
}

void bubble_recursion(int *arr, int len)
{
	if (len == 1)
		return;

	for (int i = 0; i < len - 1; i++)
	{
		if(arr[i] > arr[i + 1])
		{
			arr[i] = arr[i] ^ arr[i + 1];
			arr[i + 1] = arr[i] ^ arr[i + 1];
			arr[i] = arr[i] ^ arr[i + 1];
		}	
	}

	return bubble_recursion(arr, len - 1);
}

void sort_printf(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	return;
}
