#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int *ptr = new int[n];
    
    for(int i= 0; i<n ; i++){
        cin>>*ptr;
        
        ptr++;
    }
    // ptr+=n-1;

    //  for(int i= n-1 ; i>-1 ; i--){
         
    //     cout<<*ptr;
    //     ptr--;
    // }   

    return 0;
}
