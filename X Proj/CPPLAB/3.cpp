#include <iostream>
using namespace std;

class Shape
{
    int length;
    int width;
    int base;
    int slant;
    float height;
    float radius;

public:
    Shape()
    {
        length = width = height = base = slant = radius = 10;
    }

    void Area(int x, int y)
    {
        length = x;
        width = y;
        cout << "Area of Rectangle = " << length * width << endl;
    }
    void Area(int x , float  y , int z )
    {
        base = x;
        height = y;
        cout << "Area of Triangle= " << (0.5*base*height )<< endl;
    }
    void Area(float x)
    {
        radius = x;
        cout << "Area of Circle= " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Shape obj;
    obj.Area(4, 5);
    obj.Area(20 , 2.77 , 30);
    obj.Area(2.5);

    return 0;
}