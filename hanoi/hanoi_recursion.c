#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 64 

u_int64_t hanoi(int size);

int main(void)
{	
	printf("moves = %" PRIu64 "\n", hanoi(SIZE));
	return EXIT_SUCCESS;
}

u_int64_t hanoi(int size)
{
	if (size == 3)
	{
		return 7;
	}
	return (u_int64_t) 2 * hanoi(size - 1) + (u_int64_t) 1;
}

