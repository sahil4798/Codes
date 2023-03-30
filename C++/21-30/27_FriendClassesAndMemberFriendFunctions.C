#include<iostream>
using namespace std;

class complex;

class calculator{
    public :
    int sum( int a , int b ){
        return (a+b);
    }
    int sumRealCopmplex(complex o1 , complex o2);
    int sumCompCopmplex(complex o1 , complex o2);
};

class complex{
    int a; 
    int b;
    // Individually declaring functions as friends
    // friend int calculator:: sumRealCopmplex(complex o1 , complex o2);
    // friend int calculator:: sumCompCopmplex(complex o1 , complex o2);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

    public:
    void  setnum(int n1 , int n2){
        a=n1;
        b=n2;
    }
    void getnum(void){
        cout<<"The imganinery number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
  
   int calculator :: sumRealCopmplex(complex o1 , complex o2){
        return(o1.a+o2.a);
    }
   int calculator :: sumCompCopmplex(complex o1 , complex o2){
        return(o1.b+o2.b);
    }


int main() {
  
  complex o1 , o2 ;
  o1.setnum(3, 7);
  o2.setnum(2 , 3);
  calculator calc;
  int res1 = calc.sumRealCopmplex(o1 , o2);
  cout <<"The sum of real part of o1 and o2 is :"<<res1<<endl;
  int res2 = calc.sumCompCopmplex(o1 , o2);
  cout <<"The sum of Comp part of o1 and o2 is :"<<res2<<endl;



    return 0;
}