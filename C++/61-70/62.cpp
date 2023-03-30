#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 



int main()
{ 
 //Here opening of fiel is taking place by Member function.

 ofstream o1;
 o1.open("62.txt");
 o1<<"This is sahil here \n";   
 o1<<"This is also sahil here    ";   
 o1<<"This is sahil here";   
o1.close();

ifstream o2 ;
o2.open("62.txt");
string s1 , s2 ;
// o2>>s1>>s2;
// cout<<s1<<s2;

while(o2.eof()==0){
    getline(o2, s1);
    cout<<s1<<endl;
}

return 0;
}