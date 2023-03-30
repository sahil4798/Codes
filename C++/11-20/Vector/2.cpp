#include <iostream> 
#include <vector> 
using namespace std; 

//TWO DIMENTIONAL ARRAY


int main()
{ 

    vector<vector<int>>  moving_rating 
    {
      { 1 , 5 , 3 , 4 },
      { 1 , 3 , 2 , 5 },
      { 1 , 4 , 2 , 4 }
    };
  
  cout<<"Here the moive rating by reviewer #1 using array synatx "<<endl;
  cout<<"Rating of #1 moive by #1 reviewer :"<<moving_rating[0][0]<<endl;
  cout<<"Rating of #2 moive by #2 reviewer :"<<moving_rating[0][1]<<endl;
  cout<<"Rating of #3 moive by #3 reviewer :"<<moving_rating[0][2]<<endl;
  cout<<"Rating of #4 moive by #4 reviewer :"<<moving_rating[0][3]<<endl;

  cout<<"Here the moive rating by reviewer #1 using vector synatx "<<endl;
  cout<<"Rating of #1 :"<<moving_rating.at(0).at(0)<<endl;
  cout<<"Rating of #2 :"<<moving_rating.at(0).at(1)<<endl;
  cout<<"Rating of #3 :"<<moving_rating.at(0).at(2)<<endl;
  cout<<"Rating of #4 :"<<moving_rating.at(0).at(3)<<endl;

return 0;
}