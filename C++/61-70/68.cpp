#include <iostream> 
using namespace std; 

template<class T>
class A{
    public:
    T a;
    A(T x)
    {
      a=x;     
    }
    void display();
    // {
    //     cout<<a;
    // }  
};
template<class T>
void A<T> :: display()
    {
        cout<<a<<endl;
    } 

  void func(int x)
  {
    int a=x;
    cout<<"func is envoked  "<<a<<endl;
  }

  template<class T>
  void func(T x)
  {
    T a=x;
    cout<<"func with template  is envoked "<<a<<endl;

  }

  template<class T>
  void func2(T x)
  {
    T a=x;
    cout<<"func2 with template is envoked  "<<a<<endl;

  }


int main()
{ 
   A<int>ob1(7);
   ob1.display();
     
   func(100);    //Exact match takes high priority 
   
   func2(10000);
return 0;
}