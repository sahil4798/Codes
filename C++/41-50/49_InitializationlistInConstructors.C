#include <iostream> 
using namespace std; 

class test{
    int a; 
    int b;
    public:
    //   test(int i , int j) :a(i)  , b(j){
    //   test(int i , int j) :a(i)  , b(i+j){
    //   test(int i , int j) :a(i)  , b(2*j){
    //   test(int i , int j) :a(i)  , b(a+j){
         test(int i , int j) :b(j)  , a(b+i){ 
    //error will thow because jo phale declare hoti ha he wo phale intialise (a will first initalize as it first declare )
      cout<<"constructer executed"<<endl;
      cout<<"value of a :"<<a<<endl;
      cout<<"value of b :"<<b<<endl;
    }
};

int main()
{ 
    test t(3 ,15);


     

return 0;
}

/*
Syntax for intializaion list in constructor:
constructor(argument-list) :intiallization-section
{
    assignment + other code ;
}
class test{
    int a; 
    int b;
    public:
      test(int i , int j) :a(i)  , b(j){ Constuctor body}
};


*/