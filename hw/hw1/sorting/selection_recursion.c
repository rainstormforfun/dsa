#include <time.h>
#include <stdio.h>
#include <stdlib.h> 
#define SIZE 50

void num_generator(int *arr, int len);
void selection_recursion(int *arr, int len);
void num_printf(int *arr, int len);

int main(void)
{
	int arr[SIZE];

	num_generator(arr, SIZE);
	printf("Before selection_recursion:\n");
	num_printf(arr, SIZE);

	selection_recursion(arr, SIZE);

	printf("After selection_recursion:\n");
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

void selection_recursion(int *arr, int len)
{
	if (len == 1)
	{
		return;
	}

	int index = len - 1;
	int max = arr[len - 1];

	for (int j = 0; j < len; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
			index = j;
		}
	}

	if (index != len - 1)
	{
		arr[index] = arr[index] ^ arr[len - 1];	
		arr[len - 1] = arr[index] ^ arr[len - 1];
		arr[index] = arr[index] ^ arr[len - 1];
	}	

	return selection_recursion(arr, len - 1);
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
