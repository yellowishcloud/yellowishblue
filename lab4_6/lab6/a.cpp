#include <iostream>
using namespace std;
int plus_be_like(int a, int b){
    return a + b;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << plus_be_like(x, y) << endl;// step is important
    return 0;
}