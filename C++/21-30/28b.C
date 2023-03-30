#include <iostream>
using namespace std;
class c2;

class c1
{
    int num1;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int a)
    {
        num1 = a;
    }
    void display(void)
    {
        cout << num1 << endl;
    }
};

class c2
{
    int num2;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int b)
    {
        num2 = b;
    }
    void display(void)
    {
        cout << num2 << endl;
    }
};

void swap(c1 &o1, c2 &o2)
{
    int temp = o1.num1;
    o1.num1 = o2.num2;
    o2.num2 = temp;
}

int main()
{

    c1 x;
    x.setdata(4);
    x.display();

    c2 y;
    y.setdata(16);
    y.display();

    swap(x, y);
   
    cout<<"After swaping"<<endl;
    x.display();
    y.display();

    return 0;
}