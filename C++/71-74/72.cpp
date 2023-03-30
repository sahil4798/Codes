#include <iostream> 
#include <list> 

using namespace std; 

void display(list<int> &ob){
    list <int> :: iterator itr ;
    // itr = ob.begin();
    for(itr=ob.begin() ; itr!=ob.end() ; itr++)
    cout<<*itr<<" ";
}


int main()
{ 
     cout<<"*************************list li1***************************************"<<endl;

    list <int> li1;
    li1.push_back(9);
    li1.push_back(48);
    li1.push_back(6);
    li1.push_back(7);
    li1.push_back(2);
    li1.push_back(4);
    display(li1);
    cout<<endl;

 cout<<"*************************list li2***************************************"<<endl;

    list<int> li2(4) ;     //Declaration of a list with size and 0 as its all default element.
    display(li2);
    cout<<endl;
    list <int> :: iterator itr = li2.begin();
    *itr = 7 ;
    itr++;
    *itr = 14 ;
    itr++;
    *itr = 21 ;
    itr++;
    *itr = 28 ;
    display(li2);
    cout<<endl;
   

   cout<<"*************************list li3***************************************"<<endl;

    list <int> li3 { 1,2 ,3 , 4 , 5 , 6 ,7 ,8};   //Declaration of a list with size and  its all  element.
    cout<<li3.size()<<endl;
    li3.push_back(9);
    display(li3);
    cout<<endl;
    li3.pop_back();
    display(li3);
    cout<<endl;
    li3.push_front(0);
    display(li3);
    cout<<endl;
    li3.pop_front();
    display(li3);
    cout<<endl;
    li3.remove(5);
    display(li3);
    cout<<endl;
 
    cout<<"*************************list li4***************************************"<<endl;
    list <int> li4 { 5 , 9,2 ,6 ,78, 54 ,-5 ,3 ,0};
    // li4.sort();       //-5 0 2 3 5 6 9 54 78
    // display(li4);
    // cout<<endl;
    li4.merge(li3);      //1 2 3 4 5 6 7 8 9 2 6 78 54 -5 3 0 
    display(li4);
    cout<<endl;
    cout<<li3.size()<<endl; // 0
    display(li3);         //have nothing to display
    cout<<endl;   

return 0;
}