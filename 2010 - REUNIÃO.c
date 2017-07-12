#include <stdio.h>
#include <string.h>
#define MAX 10000

int cidades[105][105];
int distancia[105];
int visitados[105];
int menorDaMaior = MAX;

int N, M, i, j, a, b, k, c, rodarSempre = 0;

// Dijkstra
void Dij(int V)
{
	for(k = 0; k < N; k++)
	{
		memset(visitados,0,sizeof(visitados));
		distancia[V] = 0;
		visitados[V] = 1;
		int maior = 0;

		for(i = 0; i < N; i++)	distancia[i] = cidades[V][i];

		while(rodarSempre == 0)
		{
			int toOlhando = -1;
			int menorDistancia = MAX;

			for(i = 0; i < N; i++)
			{
				if(visitados[i] == 0 && distancia[i] < menorDistancia)
				{
					toOlhando = i;
					menorDistancia = distancia[i];
				}
			}

			if(toOlhando == -1) break;

			visitados[toOlhando] = 1;

			for(i = 0; i < N; i++)
			{
				if(distancia[i] < (distancia[toOlhando] + cidades[toOlhando][i])) 
					distancia[i] = distancia[i];
				else 
					distancia[i] = distancia[toOlhando] + cidades[toOlhando][i];
			}
		}

		for(i = 0; i < N; i++)
		{
			if (distancia[i] > maior) maior = distancia[i];
		}
		if (maior < menorDaMaior) menorDaMaior = maior;

		V++;
	}	    
}

int main(void)
{
	for(i = 0; i < 105; i++)
	{
		for(j = 0; j < 105; j++)
		{
			if(i == j)
				cidades[i][j] = 0;
			else
				cidades[i][j] = MAX;
		}
	}

	scanf("%d %d", &N, &M);

	for(i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		cidades[a][b] = cidades[b][a] = c;
	}

	Dij(0);
	printf("%d\n", menorDaMaior);

	return 0;
}