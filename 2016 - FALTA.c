#include <stdio.h>
#include <string.h>


int main(void)
{
	int n, fat = 1, i, j, qtd = 0;
	int cartas[40330][10];
	int numeros[10];

	memset(cartas,0,sizeof(cartas));
	memset(numeros,0,sizeof(numeros));

	scanf("%d", &n);

	for(i = 1; i <= n ; i++)
	{
		fat *= i;
	}

	for(i = 0; i < fat - 1; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &cartas[i][j]);
		}
	}

	qtd = fat/n;

	for(j = 0; j < n; j++)
	{
		for(i = 0; i < fat - 1; i++)
		{
			numeros[cartas[i][j]]++;
		}
		for(i = 1; i <= n; i++)
		{
			if(numeros[i] != qtd)
			{
				cartas[fat - 1][j] = i;
				break;
			}
		}
		memset(numeros,0,sizeof(numeros));		
	}

	for(j = 0; j < n; j++)
	{
		printf("%d"" ", cartas[fat - 1][j]);
	}
	
	return 0;
}