#include <stdio.h>
#include <string.h>
#define MAX 501
int main(void)
{
	int Q[MAX][MAX];
	int N, i, j, X, Y, verificar = 0;
	scanf("%d", &N);
	memset(Q, 0, sizeof(Q));
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		Q[X][Y] += 1;
	}
	for (i = 0; i < MAX; i++)
	{
		if(verificar == 1)
			break;
		for (j = 0; j< MAX; j++)
		{
			if(Q[i][j] >= 2)
			{
				verificar = 1;
				break;
			}
		}
	}
	printf("%d", verificar);
	return 0;
}