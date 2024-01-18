#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int count(int n, int a[], int b[]){
    
    int ccount = 0;
    for(int i = 0;i<n;i++){
        for(int j=0; j<n;j++){
            if(a[i]==b[j]){
                ccount++;
                a[i]=-1;//a[i] = -1; and b[j] = -1; are used to mark elements in the arrays a and b as "used" or "visited." This is commonly done to avoid counting the same pair of elements multiple times.
                b[j]=-1;//"-1" to indicate that they have been visited.
            }
        }
    }
    return ccount;
}
/*
5
2 2 2 4 2
5 2 5 3 4
2 */
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