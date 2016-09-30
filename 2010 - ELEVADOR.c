#include <stdio.h>
int main(void)
{
	int N, C, S, E, i, aux = 0;
	char s = 'N';
	scanf("%d %d", &N, &C);

	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &S, &E);
		aux = aux - S + E;
		if ( aux > C )
			s = 'S';
	}
	printf("%c", s);
	return 0;	
}