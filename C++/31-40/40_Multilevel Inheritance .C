#include <iostream> 
using namespace std; 
    
class student{
    int roll_number;
    public :
    void setroll_number(int x);
    void displayroll_number(void);
};

void student:: setroll_number(int x){
   roll_number=x;
}
void student :: displayroll_number(void){
  cout<<"The rollnumber is :"<<roll_number<<endl;
}


class marks : public student{

protected:
float maths;
float  physics;

public:

void setmarks(float a , float b);
void displaymarks(void);

};

void marks :: setmarks(float a , float b){
    maths=a;
    physics=b;
}
void marks ::displaymarks(void){
    cout<<"The marks of maths are :"<<maths<<endl;
    cout<<"The marks of physics are :"<<physics<<endl;
}


class result : public marks { 
    int percentage;
    public:
    void findpercentage(void);
    void displaypercentage(void);

};

 void result :: findpercentage(void){
   percentage = (maths+physics)/2;
  
 }
    void result:: displaypercentage(void){
        cout<<"The result is :"<<percentage<<"%"<<endl; 
    }

/*NOTES
If we inherting B from A and C from B(A--->B--->C)
1  A is The base class for B , and B is a bse class for C.
2  A-->B-->C is called inheritance path 
*/
int main()
{ 
  
 result r;
 r.setroll_number(12);
 r.displayroll_number();
 r.setmarks( 94.0 , 98.0);
 r.displaymarks();
 r.findpercentage();
 r.displaypercentage();


return 0;
}