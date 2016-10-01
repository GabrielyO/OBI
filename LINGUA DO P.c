#include <stdio.h>
#include <string.h>
#define MAX 1001

int main ()
{
    char F[MAX];
    int i = 0, letra = 1;
    
    while(scanf("%[^\n]", F) == 1)
    {
    }
    
    while(F[i] != '\0')     
    { 
        if(letra % 2 == 0)
        {
            printf("%c", F[i]);
        }
        
        letra++; 
        
        if (F[i] == ' ')
        {
            printf("%c", F[i]);
            letra = 1;
        }
        
        i++;
    }
    return 0;
}