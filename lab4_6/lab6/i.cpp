#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void z(string s){
    
    
    for(int i=0; i<s.size();i++){
        if(i%2==0){
            s[i]=toupper(s[i]);
        }
        cout<<s[i];
    }
    
    
}


int main(){
    
    string s;
    getline(cin, s);
    
    
    z(s);
    return 0;
}