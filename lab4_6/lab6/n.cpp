#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void print(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i < m;i++){
        for(int j=0; j < n; j++){
            cout << a[j][i]<<" ";
        }
        cout << endl;
    }
    
}

int main() {
    
    print();
    
    return 0;
}
