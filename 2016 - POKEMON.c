#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int saida;
	int x, y, z;
    scanf("%d", &n);
	scanf("%d %d %d", &x, &y, &z);

	if ((x + y + z) <= n)
	{
		saida = 3;
	}
	else
	{
		if ((x+y) <= n || (x+z) <= n || (y+z) <= n)
		{
			saida = 2;
		}
		else
		{
			if (x <= n || y <= n || z <= n)
			{
				saida = 1;
			}
			else
			{
				saida = 0;
			}
		}
	}

	printf("%d", saida);
	return 0;
}