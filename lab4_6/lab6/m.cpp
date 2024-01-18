#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void reverse1(int n, int * a){//int a[]
    for(int i=n-1; i>=0; i--){
        cout << a[i]<<" ";
    }
}

int main() {
    int n;
    int a[n];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    reverse1(n, a);
    
    return 0;
}
