#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void z(string s, int n){
    bool l=0;
    int cnt = 0;
    for(int i=0; i<s.size();i++){
        if(s[i]>='0'and s[i]<='9'){
            cnt++;
            if(cnt>=n){
                l=1;
            }
        }
    }
    if(l==1)
        cout <<"yes";
    else
        cout <<"no";
}


int main(){
    
    string s;
    cin >> s;
    int n;
    cin >> n;
    z(s,n);
    return 0;
}
/*
bool is_valid(string s, int n){
    int digit_count = 0;
    for (int i = 0; i < s.length(); ++i) {
        if(isdigit(s[i])) digit_count++;
    }

    if(digit_count == n) return true;
    else return false;
}
*/