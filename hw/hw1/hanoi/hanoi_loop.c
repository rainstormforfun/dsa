#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 64

int main(void)
{
	mpz_t result;
	mpz_init(result);
	mpz_set_ui(result, 7);

	mpz_t tmp;
	mpz_init(tmp);

	for (int i = 4; i <= SIZE; i++)
	{
		mpz_mul_ui(tmp, result, 2);
		mpz_set(result, tmp);
		mpz_add_ui(tmp, result, 1);
		mpz_set(result, tmp);
	}
	gmp_printf("hanoi(%d) = %Zu\n",SIZE, result);

	mpz_clear(result);
	mpz_clear(tmp);

	return EXIT_SUCCESS;
}
