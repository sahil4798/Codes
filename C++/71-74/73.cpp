#include <iostream> 
#include <map> 
#include <vector> 
using namespace std; 

void display(map<string , int> o)
{
map<string , int> :: iterator itr;
for(itr = o.begin() ; itr!=o.end() ; itr++ )
{
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
}
}


int main()
{ 
// Map is an associative array
map<string , int> ob;
ob["sahil"] = 98;
ob["kumar"] = 90;
ob["pandey"] = 75;
ob["singh"] = 34;

display(ob);

// ob.insert({  {pair_1} , {pair_2} ,...... {pair_n}   });  ------->//Synatax for insersion
cout<<"****************************Insertion****************************************"<<endl;
ob.insert( { {"haku" , 20} , {"jabuza" , 100} } );
display(ob);

cout<<"****************************************Some Operator*************************************"<<endl;
cout<<ob.size()<<endl;
cout<<ob.max_size()<<endl;
     

return 0;
}