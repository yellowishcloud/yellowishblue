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
    int max=INT_MIN;
    int col,row;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j  < n; ++j){
            if(j==i){
                if(a[i][j]>max){
                    max=a[i][j];
                    col =j;
                    row = i;
                }
            }
        }
    }
    cout << max <<endl;
    cout<< row+1<<" "<<col+1;
    return 0;
}