#include <iostream>
using namespace std;

class Element
{
public:
    int i;
    int j;
    int x;
};
class Sparse
{
private:
    int m;
    int n;
    int num;
    Element *e;

public:
    // Sparse()
    // {
    //     m =4;
    //     n=4;
    //     num = 4;
    //     e = new Element(num*sizeof(Element));
    // }
    Sparse(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        e = new Element[this->num];
    }
    ~Sparse()
    {
        delete[] e;
    }

    //    istream & operator>>(istream &is , Sparse &s)

    friend istream &operator>>(istream &is, Sparse &s);
    friend ostream &operator<<(ostream &os, Sparse &s);
    Sparse operator+(Sparse &s);
};

istream &operator>>(istream &is, Sparse &s)
{
    cout << "Enter the non zero element" << endl;
    for (int i = 0; i < s.num; i++)
    {
        cin >> s.e[i].i >> s.e[i].j >> s.e[i].x;
    }
    return is;
}

ostream &operator<<(ostream &os, Sparse &s)
{
    int i, j, k;
    k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (i == s.e[k].i && j == s.e[k].j)
                cout << s.e[k++].x << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
    return os;
}

Sparse Sparse ::operator+(Sparse &s)
{
    int i, j, k;
    if (m != s.m || n != s.n)
        return Sparse(0, 0, 0);
    Sparse *sum = new Sparse(m, n, num + s.num);
    i = j = k = 0;
    while (i < num && j< num)
    {
        if (e[i].i < s.e[i].i)
            sum->e[k++] = e[i++];
        else if (e[i].i > s.e[i].i)
            sum->e[k++] = s.e[j++];
        else
        {
            if (e[i].j < s.e[i].j)
                sum->e[k++] = e[i++];
            else if (e[i].j > s.e[i].j)
                sum->e[k++] = s.e[j++];
            else
            {
                sum->e[k] = e[i];
                sum->e[k++].x = e[i++].x + s.e[j++].x;
            }
        }
    }
    for (; i < num; i++)
        sum->e[k++] = e[i];
    for (; j < s.num; j++)
        sum->e[k++] = s.e[j];
    sum->num = k;
    return *sum;
}

int main()
{

    // Sparse s(3, 3, 3);
    // cin >> s;
    // cout << s;

    Sparse s1(3, 3 , 3);
    Sparse s2(3, 3, 3);
    cin>>s1;
    cin>>s2;
    
    Sparse sum=s1+s2;

    cout<<"First Matrix"<<endl;
    cout<<s1;
    cout<<"second Matrix"<<endl;
    cout<<s2;

    cout<<"Sum Matrix"<<endl;
    cout<<sum;
    

    return 0;
}