#include <stdio.h>

int main(void)
{
int N, pedaco, sobra = 0;
int i;

scanf("%d", &N);
for (i = 0; i < N; i++)
{
	scanf("%d", &pedaco);
	sobra = sobra + (pedaco - 1);
}

printf("%d", sobra);

return 0;
}

