#include <stdio.h>
int main()
{
	int i = 1, sum = 0;
	while (i > 100)
	{
		sum += i;
		i++;
		sum += i;
		i++;
	}
	printf("Sum Is %d", sum);
	return 0;
}