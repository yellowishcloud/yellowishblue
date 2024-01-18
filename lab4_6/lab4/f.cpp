#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j  < n; ++j){
            cin >> a[i][j];
        }
    }

    
    int max = 0;
    int col = 0;
    int raw = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j  < n; ++j){
            if(a[i][j] > max){ 
                max = a[i][j];
                raw = i;
                col = j;
                   
            }
            
        }
        
    }
    

    cout << raw+1 <<" "<<col+1;
    return 0;
}