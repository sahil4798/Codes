#include <iostream> 
using namespace std; 
class Matrix 
{
    private:
    int n ;
    int *M;
    public:
    Matrix()
    {
        n = 3;
        M = new int(n*(n+1)/2 * sizeof(int));
    }
    Matrix(int n)
    {
        this->n=n;
        M = new int(this->n * (this->n + 1) / 2 * sizeof(int));
    }
    
    void Set(int i , int j  , int x);
    int Get(int i , int j ) ;
    void Display();
    
    ~Matrix()
    {
        delete []M;
    }
};

void Matrix :: Set(int i , int j , int x)
{
    if(i>=j)
    M[i*(i-1)/2 + j-1] = x; 
}

int Matrix ::Get(int i , int j )
{
    if(i>=j)
    return M[i*(i-1)/2 + j-1] ;
    else
    return 0 ;
}

void Matrix :: Display()
{
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(i>=j)
            cout<<M[i*(i-1)/2 + j-1]<<" ";
            else
            cout<<0<<" ";
        }
        cout<<endl;
    }
}



int main()
{ 
int N;
printf("Enter the size of Matrix :");
scanf("%d", &N);
Matrix obj(N) ;
int i , j , x;
printf("Enter all thre element of matrix \n");
 for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            scanf("%d", &x);
            obj.Set( i, j, x);
        }
    }
    printf("\n");
     
    obj.Display(); 

return 0;
}