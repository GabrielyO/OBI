#include <stdio.h>

int main(void)
{
	int N,S = 0, aux = 0;
	int i, j;
	int H[100005];

	scanf("%d", &N);
	for ( i = 0; i < N; i++)
	{
		scanf("%d", &H[i]);
	}

	for ( i = 1; i < N-1; i++)
	{
		for ( j = i+1; j < N; j++)
		{
			if ( H[i] < H[j] )
			{
				aux++;
				break;
			}			
		}

		for ( j = 0; j < i; j++)
		{
			if ( H[i] < H[j] )
			{
				aux++;
				break;
			}
		}

		if ( aux == 2)
			S++;

		aux = 0;
	}

	printf("%d", S);

	return 0;
}