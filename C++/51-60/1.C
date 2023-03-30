#include<iostream>
using namespace std;
#include<math.h>

class sci_cal{
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
   cout<<"The logarithmic of a and b is :"<<"{"<<log10(l)<<"}"<<"{"<<log10(m)<<"}"<<endl; 
 }
 void sine(void){
   cout<<"The sin of a and b is :"<<"{"<<sin(l)<<"}"<<"{"<<sin(m)<<"}"<<endl; 
 }
 void powe(void){
   cout<<"The sin of a and b is :"<<"{"<<pow(l ,m )<<"}"<<endl; 
 }
 
};

int main() {



sci_cal c ;
c.setdata2(2 ,2);
c.expo();
c.loga();
c.sine();
c.powe();

    return 0;
}