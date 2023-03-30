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

    s->e = (struct Element *)malloc(s->num * sizeof(struct Element));
    printf("Enter the row  , coloum and elment of sparse matrix \n");
    for (int p = 0; p < s->num; p++)
    {
        scanf("%d%d%d", &s->e[p].i, &s->e[p].j, &s->e[p].x);
    }
}
void Display(struct Sparse obj)
{
    // printf("***********************Displaying Sparse matrix************************/n");
    int i, j, k = 0;
    for (i = 0; i < obj.m; i++)
    {
        for (j = 0; j < obj.n; j++)
        {
            if (i == obj.e[k].i && j == obj.e[k].j)
                printf("%d ", obj.e[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

struct Sparse *Add(struct Sparse *s1, struct Sparse *s2)
{
    struct Sparse *add;
    add = (struct Sparse *)malloc(sizeof(struct Sparse)); // Creating a single object of struct Sparse dynamiclly
    add->e = (struct Element *)malloc((s1->num + s2->num) * sizeof(struct Element));

    if ((*s1).m != s2->m && s1->n != s2->n)
    {
        return NULL;
    }
    int i, j, k;
    i = j = k = 0;

    while (i < s1->num && j < s2->num)
    {
        if (s1->e[i].i < s2->e[j].i)
            add->e[k++] = s1->e[i++];
        else if (s1->e[i].i > s2->e[j].i)
            add->e[k++] = s2->e[j++];
        else
        {
            if (s1->e[i].j < s2->e[j].j)
                add->e[k++] = s1->e[i++];
            else if (s1->e[i].j < s2->e[j].j)
                add->e[k++] = s2->e[j++];
            else
            {
                add->e[k] = s1->e[i];
                // add->e[k++].x += s2->e[j++].x;
                add->e[k++].x = s1->e[i++].x + s2->e[j++].x;
            }
        }
    }
    for (; i < s1->num; i++)
        add->e[k++] = s1->e[i];
    for (; j < s2->num; j++)
        add->e[k++] = s2->e[j];
    add->m = s1->m;
    add->n = s1->n;
    // add->num= Unknown ;   //but Maximum = s1->num + s2->num;
    add->num = k;
    return add;
}

int main()
{

    struct Sparse s1, s2, *s3;
    Create(&s1);
    Create(&s2);

    s3 = Add(&s1, &s2);
    printf("First Matrix \n");
    Display(s1);
    printf("Second Matrix \n");
    Display(s2);
    printf("Sum Matrix \n");
    Display(*s3);

    return 0;
}