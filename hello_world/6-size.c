#include <stdio.h>

/**
 * main - prints difrents sisze types
 * return: 0 to correct value, in other case nothing
 */
int main(void)
{

	printf("Size of a char:%d byte(s)\n", sizeof(char));
	printf("Size of a int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%d byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%d byte(s)\n", sizeof(long long int));
	printf("Size of a float:%d byte(s)\n", sizeof(float));
	return (0);
}
