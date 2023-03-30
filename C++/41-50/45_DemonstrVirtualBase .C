#include <iostream> 
using namespace std; 

class student{
    protected :
    int roll_number;
    public:
    void setno(int x){
    roll_number=x;  
  }
  void displayno(void){
    cout<<"The ROll Number os student is :"<<roll_number<<endl;
  }

};

class exams : virtual public student{
    protected :
    float maths;
    float physics;
    
    public:
    void setmark(float x , float y){
        maths=x;
        physics=y;
    }
    void displaymark(void){
        cout<<"The marks of maths are :"<<maths<<endl;
        cout<<"The marks of physics are :"<<physics<<endl;
    }

};

class sports : virtual public student{
    protected :
    float volleyball;
    float football;
    
    public:
    void setgrade(float x , float y){
       volleyball=x;
        football=y;
    }
    void displaygrade(void){
        cout<<"The grade of volleyball are :"<<volleyball<<endl;
        cout<<"The grade of football are :"<<football<<endl;
    }

};


class result : public exams , public sports{
   
 float result;

 public:

 void displayresult(void){
    result = (maths+physics+volleyball+football)/4 ;
    cout<<"The result of student is  :"<<result <<endl;
 }  

};





int main()
{ 
    result r;
    r.setno(100065);
    r.setmark(94 ,94);
    r.setgrade(94,95);
    r.displayno();
    r.displaymark();
    r.displaygrade();
    r.displayresult();

     

return 0;
}