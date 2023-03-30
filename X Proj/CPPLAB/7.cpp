#include <iostream>
using namespace std ;

class Student
{   
    protected :
    string name;
    int  rool_no;
    
    public:
    void SetInfo(string s , int n)
    {
        name =s;
        rool_no =n;
    }
    
};

class Exam : public Student 
{   
     protected :
    int Physics;
    int  Maths;
    int  English;
    int  Chemistry;
    int Biology;
    int  It;
    
    public:
    void SetMarks(int a , int b , int c , int d , int e, int f)
    {  
       Physics = a;
       Maths=b;
       English =c;
       Chemistry = d;
       Biology=e;
       It = f;
       
    }
    
};
class Result : public Exam
{
    int Total;
    float Percentage;
    
    public :
    void Calc()
    {
        Total = Physics+Maths+English+Chemistry+Biology+It;
        Percentage = (float)Total/6;
    }
    
    public:
    void Display(void)
    {
        cout<<"Name="<<name<<endl;
        cout<<"Roll_no="<<rool_no<<endl;
        cout<<"Marks are "<<Physics<<" "<<Maths<<" "<<English<<" "<<Chemistry<<" "<<Biology<<" "<<It<<endl;
        cout<<"Total = " <<Total<<endl;\
        cout<<"Percentage = "<<Percentage<<"%"<<endl;
    }
    
};
int main() {
    Result obj;
    obj.SetInfo("Akainu" , 600);
    obj.SetMarks( 90 , 92 , 90 , 93 , 94, 98);
    obj.Calc();
    obj.Display();
    
    
    
    

    return 0;
}