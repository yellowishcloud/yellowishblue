#include <iostream>
using namespace std;
int minus_be_like(int a, int b);
int minus_be_like(int a, int b);
int plus_be_like(int a, int b){
    return a + b;
}
int minus_be_like(int a, int b){
    return a - b;
}
void run(int a, int b){
    cout << plus_be_like(a, b) << endl;
    cout << minus_be_like(a, b) << endl;
}
int main(){
    int x, y;
    cin >> x >> y;
    run(x, y);// step is important
    return 0;
}