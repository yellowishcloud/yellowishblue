#include <iostream>
using namespace std;
int plus_be_like(int a, int b){
    return a + b;
}
void hello(){
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
}
int main(){
    int x, y;
    cin >> x >> y;
    cout << plus_be_like(x, y) << endl;// step is important
    hello();
    return 0;
}