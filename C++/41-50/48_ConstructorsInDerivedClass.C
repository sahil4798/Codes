#include <iostream> 
using namespace std; 

class base1{
    int a;
    public:
    base1(int x){
        a=x;
        cout<<"The constructor of first base class is called."<<endl;
    }
    void display1(void){
        cout<<"The value of a is "<<a<<endl;
    }
};

class base2{
    int b;
    public:
    base2(int y){
        b=y;
        cout<<"The constructor of Second base class is called."<<endl;
    }
    void display2(void){
        cout<<"The value of b is "<<b<<endl;
    }
};

class derived : public base1 , public base2{

  int c; 
  int d;
  public :
  derived(int l , int m , int n , int o) :base1(l ) , base2(m ){
   c=n;
   d=o;
   cout<<"Contuctor of derived class is called"<<endl;
  }
  void displayderived(void){
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
    }

};


int main()
{ 
    derived d(2 , 4 ,6 ,8 );
    d.display1();
    d.display2();
    d.displayderived();

     

return 0;
}