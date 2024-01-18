#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void z(int n){
    bool l =1;
    while(n>0){
        int k = n%10;
        if(k%2!=0){
            l=0;
        }
        n = n/10;
        
    }  
    
    if(l==1)
        cout <<"valid";
    else
        cout <<"not valid";
    
}


int main(){
    
    int n;
    cin >>n;
    
    z(n);
    return 0;
}