#include <iostream>
using namespace std;

class Diagonal
{
private:
    int n;
    int *A;

public:
    Diagonal()
    {
        n = 3;
        A = new int(n);
    }
    Diagonal(int n)
    {
        this->n = n;
        A = new int(this->n);
    }

    void Create(void)
    {
        int x;
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter all the elements row " << i << " of matrix" << endl;
            for (int j = 1; j <= n; j++)
            {
                // cout << "Enter the M[" << i << "][" << j << "] : ";
                cin >> x;
                if (i == j)
                    A[i - 1] = x;
            }
        }
    }

    int Get(int i, int j)
    {
        if (i == j)
            return A[i - 1];
        else
            return 0;
    }

    void Set(int i, int j, int x)
    {
        if (i = j)
            A[i - 1] = x;
    }

    void Display(void)
    {
        cout << "***********Displaying MAtix****************" << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    cout << A[i - 1] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }

    ~Diagonal()
    {
        delete[] A;
        cout << "Destructor has been called " << endl;
    }
};

int main()
{

    Diagonal obj(4);
    obj.Create();
    obj.Display();
    cout << obj.Get(1, 1) << endl;
    cout << obj.Get(2, 4) << endl;
    obj.Set(2, 2, 500);
    obj.Set(1, 4, 500);
    obj.Display();

    return 0;
}