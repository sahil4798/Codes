SOlution of Questions asked in chapter-42
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include<iostream>
#include<math.h>
using namespace std;

class s_calc{
int x ;
int y ;
public:
void setdata1(int a , int b){
    x=a;
    y=b;
}
void sum(void){
 cout<<"The sum of a and b is :"<<x+y<<endl; 
}
void subs(void){
 cout<<"The substraction of a and b is :"<<x-y<<endl; 
}
void product(void){
 cout<<"The product of a and b is :"<<x*y<<endl; 
}
void div(void){
 cout<<"The division of a and b is :"<<x/y<<endl; 
}

};

class sci_calc{
 int l;
 int m;
 public:
 void setdata2(int a , int b){
    l=a;
    m=b;
 }

 void expo(void){
   cout<<"The exponential of a and b is :"<<"{"<<exp(l)<<"}"<<"{"<<exp(m)<<"}"<<endl;
 }
 void loga(void){
   cout<<"The logarithmic of a and b is :"<<"{"<<log2(l)<<"}"<<"{"<<log2(m)<<"}"<<endl; 
 }
 void sine(void){
   cout<<"The sin of a and b is :"<<"{"<<sin(l)<<"}"<<"{"<<sin(m)<<"}"<<endl; 
 }
 void powe(void){
   cout<<"The value  a raise to the b is :"<<"{"<<pow(l , m )<<"}"<<endl; 
 }

};

class hybrid_calc : public s_calc , public sci_calc{

   public :
  void calc(int p ,int q){
    setdata1( p, q );
    setdata2( p, q );

  }  

}; 



int main(){
    
   
hybrid_calc h;
h.calc(2 , 2);
h.sum();
h.div();
h.product();
h.powe();
h.expo();
h.loga();
    return 0;
}



