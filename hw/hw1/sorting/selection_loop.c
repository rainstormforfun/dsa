#include <time.h>
#include <stdio.h>
#include <stdlib.h> 
#define SIZE 50

void num_generator(int *arr, int len);
void selection_loop(int *arr, int len);
void num_printf(int *arr, int len);

int main(void)
{
	int arr[SIZE];

	num_generator(arr, SIZE);

	printf("Before selection_loop:\n");
	num_printf(arr, SIZE);

	selection_loop(arr, SIZE);

	printf("After selection_loop:\n");
	num_printf(arr, SIZE);

	return EXIT_SUCCESS;
}

void num_generator(int *arr, int len)
{
	srand(time(NULL));
	for (int i = 0; i < len; i++)	
	{
		arr[i] = rand() % 100;
	}	
	
	return;
}	

void selection_loop(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		int min = arr[i];
		int index = i;

		for (int j = i; j < len; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}

		if (index != i)
		{
			arr[i] = arr[i] ^ arr[index];
			arr[index] = arr[i] ^ arr[index];
			arr[i] = arr[i] ^ arr[index];
		}
	}

	return;
}

void num_printf(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}	
	printf("\n");

	return;
}
