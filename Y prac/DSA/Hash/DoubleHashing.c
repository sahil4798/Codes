#include <stdio.h>
#define SIZE 10
#define R 7

int Hash1(int key)
{
    return key % SIZE;
}

int Hash2(int key)
{

    return R - (key % R);
}

int Probing(int H[], int key)
{
    int t1 = Hash1(key);
    int t2 = Hash2(key);

    int i = 0;
    while (H[(t1 + i * t2) % SIZE] != 0)
        i++;

    return (t1 + i * t2) % SIZE;
}

void insert(int H[], int key)
{
    if (H[Hash1(key)] == 0)
        H[Hash1(key)] = key;

    if (H[Hash1(key)] != 0)
        H[Probing(H, key)] = key;
}

int main()
{

    int H[SIZE] = {0};
    insert(H, 25);
    insert(H, 55);
    insert(H, 35);
    insert(H, 95);

    for (int i = 0; i < SIZE; i++)
        printf(" %d ", H[i]);

    return 0;
}