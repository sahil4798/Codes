#include <iostream>
using namespace std;

class Matrix
{
private:
    int *M;
    int n;

public:
    Matrix(int n)
    {
        this->n = n;
        M = new int(this->n);
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    ~Matrix()
    {
        delete []M;
    }
};

void Matrix ::Set(int i, int j, int x)
{
    if (i == j)
        M[i - 1] = x;
}
int Matrix ::Get(int i, int j)
{
    if (i == j)
        return M[i - 1];

    else
        return 0;
}

void Matrix ::Display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << M[i] << " ";
            else
                cout << '0' << " ";
        }
        cout<<endl;
    }
}

int main()
{

    Matrix obj(5);

    obj.Set(1, 1, 10);
    obj.Set(2, 2, 20);
    obj.Set(3, 3, 30);
    obj.Set(4, 4, 40);
    obj.Set(5, 5, 50);
    cout << obj.Get(1, 1) << " ";
    cout << obj.Get(2, 2) << " ";
    cout << obj.Get(3, 3) << " ";
    cout << obj.Get(4, 4) << " ";
    cout << obj.Get(5, 5) << endl;
    obj.Display();
    
    return 0;
}