#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, k, i, j, entraram = 0, saida = 0;
	int primos[40];
	memset(primos,0,sizeof(primos));

	scanf("%d %d", &n, &k);

	for(i = 0; i < k; i++)
	{
		scanf("%d", &primos[i]);
	}

	for(i = n; i > 0; i--)
	{
		for( j = 0; j < k; j++)
		{
			if ( i % primos[j] == 0)
			{
				entraram++;
				break;
			}
		}
	}

	saida = n - entraram;

	printf("%d", saida);

	return 0;
}