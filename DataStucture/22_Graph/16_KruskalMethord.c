#include <stdio.h>
#define I 36574;

void Union(int S[], int u, int v)
{
    if (S[u] < S[v])
    {
        S[u] = S[u] + S[v];
        S[v] = u;
    }

    else
    {
        S[v] = S[u] + S[v];
        S[u] = v;
    }
}

int find(int Set[], int u)
{
    int x = u, v = 0;
    while (Set[x] > 0)
    {
        x = Set[x];
    }
    while (u != x)
    {
        v = Set[u];
        Set[u] = x;
        u = v;
    }

    return x;
}

void Kruskal(int E[3][9])
{
    int Set[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
    int Included[9] = {0};
    int t[2][6];

    int i = 0, j, k, u, v, n = 7, e = 9, min;

    while (i < n - 1)
    {
        min = I;
        for (j = 0; j < e; j++)
        {
            if (Included[j] != 0 && E[2][j] < min)
            {
                min = E[2][j];
                k = j;
                u = E[0][j];
                v = E[1][j];
            }
        }

        if (find(Set, u) != find(Set, v))
        {
            t[0][i] = u;
            t[1][i] = v;
            Union(Set, find(Set, u), find(Set, v));
            i++;
        }
        Included[k] = 1;
    }

    printf("Finish");
    // for(int c =0 ; c <6  ;i++ )
    // {
    //     printf(" %d %d \n" , t[0][c] , t[1][c]);
    // }
}

int main()
{
    int edges[3][9] = {{1, 1, 2, 2, 3, 4, 4, 5, 5},
                       {2, 6, 7, 3, 4, 5, 7, 6, 7},
                       {25, 5, 10, 12, 8, 16, 14, 20, 18}};

    Kruskal(edges);

    return 0;
}