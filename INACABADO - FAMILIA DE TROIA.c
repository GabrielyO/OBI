#include <stdio.h>
#include <string.h>
#define MAX 500

int V, E, familia = 0;
int marca[MAX];
int G[MAX][MAX];

void dfs(int v)
{
    int i;
    marca[v] = 1;
    
    for(i = 1; i <= V; i++)
    {
        if (G[v][i] == 1 && marca[i] == 0)
            dfs(i);        
    }
}

int main()
{    
    int i, u, v;
    
    memset(G,0,sizeof(G));
    memset(marca,0,sizeof(marca));
    
    scanf("%d %d", &V, &E);
    
    for (i = 0; i < E; i++)
    {
        scanf("%d %d", &u, &v);
        G[v][u] = G[u][v] = 1;
    }
    
    for (i = 1; i <= V; i++)
    {
        if(marca[i] == 0)
        {
            dfs(i);
            familia++;
        }
            
    }
    
    printf("%d", familia);    
    return 0;
}
