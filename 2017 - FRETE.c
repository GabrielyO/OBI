#include <stdio.h>
#include <string.h>
#define MAX 100000

int cidades[105][105];
int distancia[105];
int visitados[105];
int N, M, i, j, a, b, c, rodarSempre = 0;

// Dijkstra
void Dij(int V)
{
	// Variável usada para o while rodar infinitamente
	
    distancia[V] = 0;
	visitados[V] = 1;

	for(i = 1; i <= N; i++)	distancia[i] = cidades[V][i];



	while(rodarSempre == 0)
	{
		int toOlhando = -1;
		int menorDistancia = MAX;

		for(i = 1; i <= N; i++)
		{
			if(visitados[i] == 0 && distancia[i] < menorDistancia)
			{
				toOlhando = i;
				menorDistancia = distancia[i];
			}
		}

		if(toOlhando == -1) break;

		visitados[toOlhando] = 1;

		// Verifica se o valor que já está lá é o menor possível ou se o novo caminho é menor
		for(i = 1; i <= N; i++)
		{
			if(distancia[i] < (distancia[toOlhando] + cidades[toOlhando][i])) 
				distancia[i] = distancia[i];
			else 
				distancia[i] = distancia[toOlhando] + cidades[toOlhando][i];
		}
	}
}

int main(void)
{
	memset(visitados,0,sizeof(visitados));

	// Código que preenche com infinitos e zeros
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

	//Leitura de dados
	scanf("%d %d", &N, &M);

	//Preenchimento da matriz em espelho
	for(i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		cidades[a][b] = cidades[b][a] = c;
	}

	//Rodar o código do Dijkstra
	Dij(1);
	printf("%d\n", distancia[N]);

	return 0;
}