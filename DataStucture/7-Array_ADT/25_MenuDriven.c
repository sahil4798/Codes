#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array ob)
{
    printf("The element of array are : ");

    for (int i = 0; i < ob.length; i++)
    {
        printf(" %d ", ob.A[i]);
    }
    printf("\n");
}
void Insertion(struct Array *ob, int index, int element)
{

    if (index >= 0 || index <= ob->length)
    {
        for (int i = ob->length; i > index; i--) // 0 1 2 3 4 5
        {
            ob->A[i] = ob->A[i - 1]; // arr[6]=arr[5];
        }
        ob->A[index] = element;
        ob->length++;
    }
}
int Delete(struct Array *ob, int index)
{
    int x = 0;
    if (index >= 0 && index < ob->length)
    {
        x = ob->A[index];

        for (int i = index; i < ob->length - 1; i++)
        {
            ob->A[i] = ob->A[i + 1];
        }
        ob->length--;
        return x;
    }

    return 0;
}

int LinearSearch(struct Array ob, int key)
{
    for (int i = 0; i < ob.length; i++)
    {
        if (ob.A[i] == key)
        {
            return i;
        }
    }

    return -1;
}
int Get(struct Array obj, int index)
{
    int e;
    if (index >= 0 && index < obj.length)
    {
        e = obj.A[index];
        return e;
    }
    return -1;
}

int Sum(struct Array obj)
{
    int sum = 0;
    for (int i = 0; i < obj.length; i++)
    {
        sum = sum + obj.A[i];
    }
    return sum;
}

int main()
{
    struct Array arr;
    printf("Enter teh size of Array\n ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    int x, index;
    int ch;

    do
    {

        printf("\n Menu \n");
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Search \n");
        printf("4. Display \n");
        printf("5. Sum \n");
        printf("6. Exit \n");

        printf("Enter your choice\n ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element and index ");
            scanf("%d%d", &x, &index);
            Insertion(&arr, index, x);
            break;
        case 2:
            printf("Enter the index ");
            scanf(" %d ", &index);
            x = Delete(&arr, index);
            printf("%d \n", x);
            break;
        case 3:
            printf("Enter the element  ");
            scanf(" %d ", &x);
            index = LinearSearch(arr, x);
            printf("%d \n", index);
            break;
        case 4:
            Display(arr);
            break;
        case 5:
            printf("the Sum is " , Sum(arr));
            break;
        }
    }while (ch<6);



    return 0;
}
