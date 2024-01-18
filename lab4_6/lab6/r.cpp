#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
double Sum(int n, int m){
    double k=(m*100)/n;
    return k;
}

int main(){
    
    int n, m;
    cin >> n >> m;
    
    cout << setprecision(6)<<Sum(n,m);
    
    
    return 0;
}