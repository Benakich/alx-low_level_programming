int _sqrt_recursion(int n);
int _find_sqrt(int n, int i);

/**
* _find_sqrt - fn to find square root
* @n: int to find sqrt of
* @i: divisor
*
* Return: i if sqrt found, otherwise -1
*/

int _find_sqrt(int n, int i)
{
	while (i > 0)
	{
		if (i * i == n)
			return (i);
		else
			return (_find_sqrt(n, (i - 1)));
	}
	return (-1);
}



/**
* _sqrt_recursion - fn to find natural square root
* @n: number to find natural square root of
*
* Return: if n does not have aa nat sqr_root -1, else int
*/

int _sqrt_recursion(int n)
{
	unsigned int i;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	i = n / 2;

	return (_find_sqrt(n, i));
}
