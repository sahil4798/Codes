#include <stdio.h>
#define SIZE 10

int Hash(int key)
{
    return key % SIZE;
}

int Probe(int H[], int key)
{
    int i = 0;
    int index = Hash(key);

    while (H[(index + i*i) % SIZE] != 0)
    {
        i++;
    }

    return (index + i*i) % SIZE;
}

void Insert(int H[], int key)
{
    int index, i;
    index = Hash(key);
    if (H[index] != 0)
        index = Probe(H, key);

    H[index] = key;
}

int Search(int H[], int key)
{
    int i=0;
    int index = Hash(key);

    if ( H[index] != key)
    {
        while (H[(index + i*i) % SIZE] != key)
            i++;
    }
    return index + i*i;
}

int main()
{

    int HT[10] = {0};

    Insert(HT, 23);
    Insert(HT, 43);
    Insert(HT, 13);
    Insert(HT, 27);

    for (int i = 0; i < 10; i++)
        printf(" %d-%d ", i , HT[i]);

    printf("\nThe Index is : %d\n", Search(HT , 43));

    return 0;
}