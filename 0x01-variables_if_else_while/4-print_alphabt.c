#include <stdio.h>
/**
 * maun - entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar(alphabet);
}
putchar('\n');
return (0);
}
