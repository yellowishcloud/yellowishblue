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

  
    int sum_r;
    for(int i = 0; i < n; ++i){
        sum_r = 0;
        for(int j = 0; j  < m; ++j){
            sum_r = sum_r + a[i][j];
            
        }
        cout <<"The sum of row number "<<i+1<<" is "<< sum_r<< endl;
    }
    int sum_c;
    for(int j = 0; j < m; ++j){
        sum_c = 0;
        for(int i = 0; i  < n; ++i){
            sum_c = sum_c + a[i][j];
            
        }
        cout <<"The sum of column number "<<j+1<<" is "<< sum_c<< endl;
    }
    
    
    

    return 0;
}