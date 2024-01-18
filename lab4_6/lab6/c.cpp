#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int count(int n, int a[], int b[]){
    sort(a, a+n);
    sort(b, b+n);
    int i=0, j=0;
    int ccount = 0;
    while(i<n and j<n){
        
        if(a[i]==b[j]){
            ccount++;
            i++;
            j++;
        }else if(a[i]<b[j]){
            i++;
        }else
            j++;
    }
    return ccount;
}
/*
6
4 3 1 2 4 1
3 1 1 5 4 4
5*/

int main(){
    
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n;i++){
        cin >>a[i];
    }
    for(int i=0; i<n;i++){
        cin >>b[i];
    }
    cout<<count(n,a,b)<<" ";
    

    return 0;
}