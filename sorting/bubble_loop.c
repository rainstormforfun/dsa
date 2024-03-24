#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

void num_generator(int *arr, int len);
void bubble_loop(int *arr, int len);
void sort_printf(int *arr, int len);

int main(void)
{
	int arr[SIZE];

	num_generator(arr, SIZE);

	bubble_loop(arr, SIZE);

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

void bubble_loop(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
			}
		}
	}	

	return;
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

