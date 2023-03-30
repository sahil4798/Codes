#include<iostream>
using namespace std;

class complex {

int a , b;

public:

complex(){
    a=0;
    b=0;
}
complex(int x){
    a=x;
    b=0;
}
complex(int x , int y){
    a=x;
    b=y;
}

void display(void){
    cout<<"("<<a<<","<<b<<")"<<endl;
}


};

int main() {

complex C1 ;
C1.display();

complex C2(2);
C2.display();

complex  C3(4, 8);
C3.display();

    return 0;
}