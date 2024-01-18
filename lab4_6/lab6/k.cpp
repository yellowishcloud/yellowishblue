#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int Sum(int n){
    int sum = 0;
    while(n>0){
        int k= n % 10;
        sum =sum +k;
        n= n/10;
    }
    return sum;
}

int main(){
    
    int n;
    cin >> n;
    
    cout << Sum(n);
    

    return 0;
}