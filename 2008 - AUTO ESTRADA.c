#include <stdio.h>

int main(void)
{
	int C, P = 0;
	int i;
	char L[1000005];
	scanf("%d", &C);
	for (i = 0; i < C; i++)
	{
		scanf("%s", &L[i]);
	}

	for (i = 0; i < C; i++)
	{
		
		if (L[i] == 'P' || L[i] == 'C')
			P += 2;
		else if ( L[i] == 'A')
			P += 1;
		else if ( L[i] == 'D')
			P = P;
	}

	printf("%d", P);
	return 0;
}