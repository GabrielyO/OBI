#include <stdio.h>
int main(void)
{
	int A, P = 1986, i = 0;
	scanf("%d", &A);
	while (i==0)
	{
		if (A < P)
		{
			i = 1;
			break;
		}
		else
			P += 76;
	}

	printf("%d", P);

	return 0;
}
