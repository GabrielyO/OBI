#include <stdio.h>
int main(void)
{
	int N, P, X, Y, pontos, C = 0;
	int i;
	scanf("%d %d", &N, &P);
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		pontos = X + Y;
		if (pontos >= P)
			C += 1;
	}
	printf("%d", C);
	return 0;
}