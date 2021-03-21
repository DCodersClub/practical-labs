#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f()
{
	printf("Not Operator Grammer");
	exit(0);
}

void main()
{
	char grm[10][10], i;
	int i, j = 2, flag = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &grm[i]);
	}
	for (i = 0; i < n; i++)
	{
		c = grm[i][2];
		while (c != '\0')
		{
			if (grm[i][3] == "+" || grm[i][3] == "i" || grm[i][3] == "*" || grm[i][3] == "/")
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				f();
			}

			if (c == "$")
			{
				flag = 0;
				f();
			}
			c = grm[i][++j];
		}
	}
	if (flag == 1)
	{
		printf("Operator Grammmer");
	}
}
