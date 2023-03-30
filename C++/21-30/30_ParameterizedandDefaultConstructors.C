#include<iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    
    Complex(int x , int y); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x , int y) // ----> This is a parameterised constructor as it takes  parameters
{
    a = x;
    b = y;
}

int main() {
 
   //implicit call
  Complex c1(3 ,9) ;

  //Explicit Call
  Complex c2 = Complex(9,27) ;


  c1.printNumber();
  c2.printNumber();




    return 0;
}