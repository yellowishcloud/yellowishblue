#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
void Sum(int n){
    int sum = 0;
    int original = n;
    while(n>0){
        int k= n % 10;
        sum = sum +k;
        n= n/10;
    }
    int w = original%10;
    if(sum % w==0){
        cout<<"yes";
    }else{
        cout <<"no";
    }
    
}

int main(){
    
    int n;
    cin >> n;
    
    Sum(n);
    
    
    return 0;
}