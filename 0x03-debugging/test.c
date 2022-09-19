#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   printf("Value of a[0] using a*:%d\n", *a);
   *(a + 1) = 198;
   *(a + 2) = 298;
   printf("value of a[2] using a[2]: %d\n", a[2]);
   printf("value of a[2] using a + 2: %p\n", a + 2);
   a[3] = 398;
   printf("a[3] should remain unchanged");
   printf("value of a[3] using a[3]: %d\n", a[3]);
   printf("value of a[3] using a + 3: %p\n", a + 3);

   *(a + 4) = 498;
   printf("will a[4] remain unchanged, since we cannot manipulate them by address");
   printf("value of a[4] using a[4]: %d\n", a[4]);
   p = a + 1;
   printf("p: %p\n", p);
   printf("p: %p\n", p);
   *p = 98;  
   printf("value of p using *p: %d\n", *p);
   p2 = a + 3;
   *p2 = *p + 1337;
   printf("a + 3 using a+3: %p\n", a + 3);
   printf("a + 3 using p2: %p\n", a + 3);
   printf("*p2: %d\n", *p2);
   return (0);
}
