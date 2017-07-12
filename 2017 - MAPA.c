#include <stdio.h>
char mapa[103][103];
int x = 0;
int y = 0;

void Achar(int i, int j)
{
	if(i == 0 || j == 0)
		return;

	else if(mapa[i][j] == 'H' || mapa[i][j] == 'o')
	{
		x = i;
		y = j;
		mapa[i][j] = '.';

		if(mapa[i][j+1] == 'H')
			return Achar(i,j+1);

		else if(mapa[i][j-1] == 'H')
			return Achar(i,j-1);
		else if(mapa[i+1][j] == 'H')
			return Achar(i+1,j);
		else if(mapa[i-1][j] == 'H')
			return Achar(i-1,j);
	}	

	return;
}

int main(void)
{
	int L, C, i, j;

	//preenche com pontos a matriz
	for(i = 0; i < 103; i++)
	{
		for(j = 0; j < 103; j++)
		{
			mapa[i][j] = '.';
		}
	}
	//fim

	scanf("%d %d", &L, &C);

	for(i = 1; i <= L; i++)
	{
		for(j = 1; j <= C+1; j++)
		{
			scanf("%c", &mapa[i][j]);
		}
	}

    for(i = 1; i <= L; i++)
	{
		for(j = 1; j <= C+1; j++)
		{
			if(mapa[i][j] == 'o')
			{
				Achar(i, j);

				break;
			}
		}
	}

	printf("%d %d", x, y - 1);


	return 0;
}