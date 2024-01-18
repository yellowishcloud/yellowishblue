#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
bool isValid(const string& s, int n){//это важно чтобы isdigie can work meaning it won't modify the original string but can access it efficiently.& is a rederence
    int cnt = 0;
    for(size_t i=0; i<s.size();i++){
        //char c =s[i];// похоже это не важно если здесь сюда s[i] поставить
        if(isdigit(s[i])){
            cnt++;
            if(cnt>=n){// it seems that it put it sooner and it works with bool
                return true;
            }
        }else{// похоже это возвращает снт на свое место для цикла важно
            cnt = 0;// for case that there will be no 
        }
    }
    return  false;
}


int main(){
    
    string s;
    cin >> s;
    int n;
    cin >> n;
    if(isValid(s, n)){
        cout <<"valid";
    }else{
        cout <<"notvalid";
    }
    return 0;
}
