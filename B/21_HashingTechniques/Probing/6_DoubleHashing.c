#include <stdio.h>
#define SIZE 10
#define R 7

int Hash(int key)
{
    return key % SIZE;
}

int Hash2(int key)
{
    return R - (key % R);
}

int Probe(int H[], int key)
{
    int i = 0;
    int h1 = Hash(key);
    int h2 = Hash2(key);

    // H( (Hash(key) + i*Hash2(key) )%SIZE )

    while (H[(h1 + i * h2) % SIZE] != 0)
    {
        i++;
    }
    return (h1 + i*h2 )%SIZE ;
}

void Insert(int H[], int key)
{
    int index = Hash(key);
    if (H[index] != 0)
    {
        index = Probe(H, key);
    }
    H[index] = key;
}

int Search(int H[] , int key)
{   
    int i=0;
    int h1 = Hash(key);
    int h2;

    if(H[h1] !=key)
    {   
        h2 = Hash2(key);
        while(H[ (h1 + i*h2)%10 ] !=key )
           i++;

    }

    return (h1 + i*h2)%10 ;

}

int main()
{
    int HT[10] = {0};

    Insert(HT, 5);
    Insert(HT, 25);
    Insert(HT, 15);
    Insert(HT, 35);
    Insert(HT, 95);

    for (int i = 0; i < SIZE; i++)
        printf(" %d-%d ", i, HT[i]);

    printf("\nThe index of %d is %d \n"   , 95 ,  Search(HT , 95)) ;
 
    return 0;
}