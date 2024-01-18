#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void z(string s){
    
    
    for(int i=0; i<s.size();i++){
        if(s[i]=='a'or s[i]=='e'or s[i]=='o' or s[i]=='i'or s[i]=='u' or s[i]=='A'or s[i]=='E'or s[i]=='O' or s[i]=='I'or s[i]=='U'){
            continue;
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