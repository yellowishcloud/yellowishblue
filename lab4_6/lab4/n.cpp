#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;
    cin >> n;


    for(int i=2; i <= n; i++){
        bool prime = 1;
        for(int j=2; j < i; j++){
            if(i%j == 0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            cout<<i<<" ";
        }
    }
    return 0;
}