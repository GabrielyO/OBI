#include <stdio.h>

int main(void)
{
	int N, i, D, X, dario = 0, xerxes = 0;
	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &D, &X);

		if(D == 0)
		{
			if(X == 1 || X == 2)
				dario++;
			else
				xerxes++;
		}
		else if(D == 1)
		{
			if(X == 2 || X == 3)
				dario++;
			else
				xerxes++;
		}
		else if(D == 2)
		{
			if(X == 3 || X == 4)
				dario++;
			else
				xerxes++;
		}
		else if(D == 3)
		{
			if(X == 4 || X == 0)
				dario++;
			else
				xerxes++;
		}
		else if(D == 4)
		{
			if(X == 0 || X == 1)
				dario++;
			else
				xerxes++;
		}
	}

	if(xerxes > dario)
		printf("xerxes");
	else
		printf("dario");
	return 0;
}