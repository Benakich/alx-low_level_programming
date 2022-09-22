#include <stdio.h>

int main(void)
{
	char i[] = "Hello";
	char j[] = "World!";
	char p;
	int k;
	int l;
	int m;
	
	for (l = 0; i[l] != '\0'; l++)
	{
		;
	}

	if (i[l] == j[l])
	{
		p = 0;
	}
	else
		p = i[l] - j[l];

	printf("%c\n", p);
	printf("%d\n", p);

	return (0);
}
