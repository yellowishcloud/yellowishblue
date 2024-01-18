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
    
    int sum = 0;
    int row = 0;
    for(int j = 0; j < m; ++j){
        int min = a[0][j];// это штуковина гениально но я бы не стала повторять надеюсь буду помнить
        for(int i = 0; i  < n; ++i){
            if(a[i][j]<min){
                min = a[i][j];
                row = i;
                
            }
            
        }
        
        cout << row+1 <<"; "<< j+1<<endl;
        sum += min;
    }
    cout << endl;
    cout <<sum;
    
    
    

    return 0;
}