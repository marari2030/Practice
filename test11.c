#include<stdio.h>

int main()
{
	int a = 1;
	int i = 1;
	while (i <= 100)
	{
		if (a % 2 == 1)
		{
			printf("%d\n", a);
		}
		i++;
		a++;

	}

	

	return 0;
}
