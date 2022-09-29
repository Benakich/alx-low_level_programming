int find_prime(int n, int i);
int is_prime_number(int n);

/**
* find_prime - fn to find if a number is a prime number
* @n: int number, check if prime
* @i: int number, divisor
*
* Return: 1 if prime, 0 otherwise
*/

int find_prime(int n, int i)
{
	if (i > 1 && n % i == 0)
		return (0);
	if (i > 1)
		return (find_prime(n, (i - 1)));
	return (1);
}

/**
* is_prime_number - fn to find if a number is prime
* @n : int, number to check prime
*
* Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	unsigned int i;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);

	i = n / 2;

	return (find_prime(n, i));
}
