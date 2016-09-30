#include <stdio.h>
int main(void)
{
	int A, N, F, S = 0;
	int i;
	scanf("%d", &A);
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &F);
		if (A * F >= 40000000)
			S += 1;
	}
	printf("%d", S);
	return 0;
}