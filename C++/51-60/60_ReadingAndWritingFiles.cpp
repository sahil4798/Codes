#include <iostream> 
#include <fstream> 

using namespace std; 



int main()
{ 
   
    //Here opening of fiel is taking place by Constructor.

    ofstream ob("60fileA.txt");  //Using constructor to open txt file i.e ofstream is name of constructer snf ob is sn object and inside the bracket it is adress of file 
    string a = "How the josh" ;
    ob<<a;
     
    ifstream ob2("60fileB.txt");
    string b; 
    // ob2>>b;
    getline(ob2, b);
    cout<<b<<endl;
    
     

return 0;
}