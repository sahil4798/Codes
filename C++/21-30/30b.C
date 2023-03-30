#include<iostream>
using namespace std;

class point {
 int x ;
 int y;

 public:
 friend void distance(point o1 , point o2);

 point(int a , int b){
    x=a;
    y=b;
 } 
 
 void displaypoint(void){
   cout<<"("<<x<<","<<y<<")"<<endl; 
 }

};

void distance(point o1 , point o2){
  float d;
//   d = ( (o1.x - o2.x)*(o1.x- o2.x) + (o1.y + o2.y)*(o1.y - o2.y) )^1/2 ;
  d = ( (o1.x - o2.x)*(o1.x- o2.x) + (o1.y + o2.y)*(o1.y - o2.y) ) ;

  cout<<d<<endl;
 }

int main() {
 
 point p1(6,9);
 p1.displaypoint();

 point p2(1,1);
 p2.displaypoint();

 distance(p1 , p2);

    return 0;
}