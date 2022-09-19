/**
 * swap_int - fn to swap two integers
 *
 * @a: pointer for swapping
 * @b: pointer for swapping
 */
void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;
}
