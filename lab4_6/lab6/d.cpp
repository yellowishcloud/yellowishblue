#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
void ID(int n, int a[], int x){
    bool kk= 0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            kk = 1;
        }
            
    }
    if(kk == 1){
        cout<<"yes";
    }else
        cout<<"no";
}

int main(){
    
    int n;
    cin >> n;
    int a[n];
    
    for(int i=0; i<n;i++){
        cin >>a[i];
    }
    int x;
    cin >> x;
    ID(n, a,x);
    

    return 0;
}