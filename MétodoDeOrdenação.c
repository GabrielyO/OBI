#include <stdio.h>
int num[50000];
int main (void)
{
	int N = 0, e, i, j;
	scanf("%d", &N);

	for ( i = 1; i <= N; i++)
	{
		scanf("%d", &e);
		
		for ( j =  i- 1; j >= 0  && num[j - 1] > e; j--)
			num[j] = num[j - 1];

		num[j] = e;		
	}

	for (i = 0; i < N; i++)
		printf("%d",num[i]);

	return 0;
}