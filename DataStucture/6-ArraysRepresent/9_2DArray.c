#include<stdio.h> 
#include<stdlib.h> 
 
//  void display(int arr[][] )
//  {
//     for(int i=0 ; i<3 ; i++)
//     {
//         for(int j=0 ; j<4 ; j++)
//         {
//             printf( " %d " , arr[i][j]);
//         }
//     }
//  }

int main(){ 

// *******************************Methord-1****************************************
 int arr[3][4] = { {1, 2, 3, 4} , {5, 6, 7, 8} , { 9, 10, 11, 12} };
//  printf("%d \n " ,arr[2][3]);



// *******************************Methord-2****************************************
int *ptr[3];
ptr[0] =(int*)malloc(4*sizeof(int));
ptr[1] =(int*)malloc(4*sizeof(int));
ptr[2] =(int*)malloc(4*sizeof(int));
 for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            printf( " %d " , ptr[i][j]);
        }
        printf("\n");
    } 
    printf("\n");
// ptr[2][3] =4;
// printf("%d\n", ptr[2][3]); 



// *******************************Methord-3****************************************

int **p;
p = (int**)malloc(3*sizeof(int *));
p[0]=(int*)malloc(4*sizeof(int));
p[1]=(int*)malloc(4*sizeof(int));
p[2]=(int*)malloc(4*sizeof(int));
for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            printf( " %d " , p[i][j]);
        }
        printf("\n");
    }

return 0;
}