#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{   
    stringstream ss(str);
    
    vector <int> vec;
    int a;
    char ch;
    while(ss >> a)
    {
        vec.push_back(a);
        ss>>ch;

    }
  

	// int n;
    // vector <int> vec1(n);
    // for(int i=0 ; i<str.length() ; i++)
    // {
    //     str<<vec1[0];
    // }
    
    
    // vector <int> vec2(3);
    // for(i=0 ; i<str.length() ; i++)
    // {
    //     str>>vec2[0];
    // }

    // return vec2;

    return vec;
}

int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++) 
    {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
