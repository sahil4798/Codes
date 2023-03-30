#include <iostream> 
#include<cstring>
using namespace std; 

class A{
    protected:
    string s;
    float rating ;
  
   public:
    A(string x , float y){
      s=x;
      rating=y;
    }
     virtual void display(void) =0 ;              //do nothing functon -> pure virtual function.
   
};

class B : public A {
    float video_length;
    public:
    B(string x , float y , float z) : A( x , y){
        video_length= z;
    }

    void display(void){
        cout<<"The Title of video is "<<s<<" minnute"<<endl;
        cout<<"The rating of video is "<<rating<<endl;
        cout<<"The length of video is "<<video_length<<endl;
    }
};

class C  : public A{

    int total_words;

    public:
    C(string x , float y , int z) : A( x , y){
        total_words = z ;
    }

    void display(void){
        cout<<"The Title of tutorial is "<<s<<" totorial"<<endl;
        cout<<"The rating of tutorial is "<<rating<<endl;
        cout<<"Total words in Tutorial are "<<total_words<<endl;
    }

};

int main()
{ 

string s ;
float rating , videolen;
int words ;
s = "paython";
rating = 4.5 ;
videolen =6.5;
words = 506;

B objb(s , rating , videolen);
C objc(s , rating , words);

A *obj[2];

obj[0] = &objb ;
obj[0]->display();
     
obj[1] = &objc;
obj[1]->display();     

return 0;
}

