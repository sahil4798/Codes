#include <iostream> 
#include <fstream> 
using namespace std; 



int main()
{ 
 
//  ifstream ob1("61a.txt");
//  string a;
// //  getline(ob1, a);
//  ob1>>a;
 
//  ofstream ob2("61b.txt");
//  ob2<<a;

ofstream ob1("61a.txt");
string s;
cout<<"Enter your Name"<<endl;
cin>>s;
ob1<<"my name is " + s ;

ob1.close();

ifstream ob2("61a.txt");
string c;
// ob2>>c;
getline(ob2, c);
cout<<"The content in file is : "<<c;

     

return 0;
}