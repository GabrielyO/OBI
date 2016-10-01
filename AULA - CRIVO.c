#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i, j;
	int crivo[50000];
	memset(crivo,0,sizeof(crivo));

	scanf("%d", &n);
	for(i = 2; i <= n; i++)
	{
		for(j = 2; j <= n; j++)
		{
			if(crivo[j] == 0 && j % i == 0 && j != i)
			crivo[j]++;
		}
	}

	for(i = 2; i <= n; i++)
	{
		if(crivo[i] == 0)
		printf("%d\n", i);
	}

	return 0;
}