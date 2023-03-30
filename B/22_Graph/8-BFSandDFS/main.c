#include <stdio.h>
#include "queue.h"

void BFS(int G[][7], int i, int n)
{
    int visited[8] = {0};
    int u;
    struct Queue q;
    Create(&q);

    printf(" %d ", i);
    visited[i] = 1;
    Enqueue(&q, i);

    while (!Isemplty(q))
    {
        u = Dequeue(&q);
        for (int v = 1; v <= n; v++)
        {
            if (G[u][v] == 1 && visited[v] != 1)
            {
                printf(" %d ", v);
                Enqueue(&q, v);
                visited[v] = 1;
            }
        }
    }
}

void DFS(int G[][7], int u, int n)
{
    int v;
    static int visited[7] = {0};
    if (visited[u] == 0)
    {
        printf(" %d ", u);
        visited[u] = 1;

        for (v = 1; v <= n; v++)
        {
            if (G[u][v] == 1 && visited[v] == 0)
            {
                DFS(G, v, n);
            }
        }
    }
}

int main()
{

    int G[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};

    BFS(G, 1, 7);
    DFS(G, 4, 7);

    return 0;
}