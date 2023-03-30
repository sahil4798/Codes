// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Perimeter
{
  int length , breath , radius ;
  
  public :
  Perimeter(){
      length=0;
      breath =0;
      radius=0;
  }
  Perimeter(int x , int y)
  {
     length=x;
     breath =y;
   cout<<"The perimeter of rectangle "<<length+breath<<endl;
  }
  Perimeter(int z)
  {
      radius=z;
      cout<<"THE perimeter of Circle is "<<2*3.14*radius<<endl;
  }
  ~Perimeter()
  {
      cout<<"Destructer is called"<<endl;
  }
  
};

int main() {
    
    Perimeter obj1(10 ,20);

    Perimeter obj2(10);
    

    return 0;
}