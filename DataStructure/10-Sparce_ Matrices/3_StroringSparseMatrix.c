#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int i;
    int j;
    int x;
};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *e;
};

void Create(struct Sparse *s)
{
    printf("Enter the Dimension of Sparse Matrix : ");
    scanf("%d%d", &s->m, &s->n);
    printf("Enter the total non-zero element :");
    scanf("%d", &s->num);

    s->e = (struct Element *)malloc( s->num*sizeof(struct Element) );
    
    printf("Enter the row  , coloum and elment of sparse matrix \n");
    for (int p = 0; p < s->num; p++)
    {
        scanf("%d%d%d", &s->e[p].i, &s->e[p].j, &s->e[p].x);
    }
}
void Display(struct Sparse obj)
{ 
    printf("***********************Displaying Sparse matrix************************/n");
    int i, j, k = 0;
    for (i = 0; i < obj.m; i++)
    {
        for (j = 0; j < obj.n; j++)
        {
            if(i == obj.e[k].i && j == obj.e[k].j)
            printf("%d " , obj.e[k++].x );
            else
            printf("0 ");
        }
        printf("\n");
    } 
}

int main()
{

    struct Sparse s;
    Create(&s);
    Display(s);
    
    return 0;
}