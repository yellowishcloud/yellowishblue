#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int Max(int n[]){
    int max = INT_MIN;
    for(int i=0;i<4;i++){
        if(n[i]>max){
            max = n[i];
        }
            
    }
    return max;
}

int main(){
    
    int n[4];
    for(int i=0; i<4;i++){
        cin >>n[i];
    }
    
    cout << Max(n);
    

    return 0;
}