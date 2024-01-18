#include <iostream>

using namespace std;

void read(int x[], int n){
    for(int i = 0; i < n; ++i){
        cin >> x[i];
    }
}

void mutate(int x[], int n){
    for(int i = 0; i < n; ++i){
        x[i] = x[i]*2;
    }
}

void print(int x[], int n){
    for(int i = 0; i < n; ++i){
        cout<<x[i]<<" ";
    }
    cout <<endl;
}
/*5 input
1 2 3 4 5
2 4 6 8 10 */

int main(){
    
    int n;
    cin >> n;
    int y[n];
    read(y,n);
    mutate(y,n);
    print(y, n);

    return 0;
}