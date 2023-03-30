#include <iostream> 
using namespace std; 

class base {
    int d1;
    public:
    int d2 ;
    int setdata1();
    int setdata2();
    void display() ;
};
  int base  :: setdata1(void){
    d1 =15 ;
    return d1;
  }
  int base  :: setdata2(void){
    d2 =20 ;
    return d2 ;
  }
  void base :: display(void){
    cout<<d1<<endl;
    cout<<d2<<endl;
  }

class derived : public base{
public :
int d3 ;

void calc();
void show();
};

void derived :: calc(void){
    d3= setdata1() *d2;
  
}

void derived :: show(void){
    cout<<d3;
}


int main()
{ 
   
     derived der ;
     der.setdata1();
     der.setdata2();
     der.display();
     der.calc();
     der.show();

return 0;
}