#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j  < m; ++j){
            cin >> a[i][j];
        }
    }

    
    int min = 1000;
    
    int raw = 0;
    int sum;
    for(int i = 0; i < n; ++i){
        sum = 0;
        for(int j = 0; j  < m; ++j){
            sum = sum + a[i][j];
            
        }
        
        if(sum < min){
            min = sum;
            raw = i;
        }
        }
    
    
    cout << raw+1;

    return 0;
}