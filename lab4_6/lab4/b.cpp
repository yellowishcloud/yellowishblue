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
    int smax =0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j  < n; ++j){
            if(a[i][j] > max){
                smax = max;// если поменять местами показывает макснаверное нужно посмотреть

                max = a[i][j];    
            }else if (a[i][j] > smax && a[i][j] != max) {
                smax = a[i][j];
            }
            
        }
        
    }
    if (max == smax)    cout<<1;
    else 
        cout << smax;


    return 0;
}