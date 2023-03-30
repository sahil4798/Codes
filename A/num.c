#include <stdio.h>

int main()
{
    printf("Enter as many number as you want : \n");
    int n;
    int sum = 0;
    int count = 0;

    while (n != -100)
    {
        scanf("%d", &n);
        if (n != -100)
        {
            sum = sum + n;
            count++;
        }
    }

    printf("Sum of all entered : %d \n", sum);
    float avg = (float)sum / count;
    printf("Sum of all entered %f\n", avg);

    return 0;
}