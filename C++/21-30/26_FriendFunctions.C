#include<iostream>
using namespace std;

class complex{
    int a; 
    int b;

    friend complex sumcomplex(complex x , complex y);
    public:
    void  setnum(int n1 , int n2){
        a=n1;
        b=n2;
    }
    void getnum(void){
        cout<<"The imganinery number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex x , complex y){
  
  complex num3;
  num3.setnum(x.a+y.a , x.b+y.b);
  return num3;
  

}

int main() {
 
    complex num1 , num2 , sum ;
    num1.setnum(2 , 9);
    num1.getnum();
    num2.setnum(6 , 1);
    num2.getnum();

    sum=sumcomplex(num1 , num2);
    sum.getnum();


    return 0;
}



/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/