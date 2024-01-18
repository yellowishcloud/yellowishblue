#include <iostream>
#include <iomanip>

using namespace std;

double cP(int n, int m) {
    
    double percentage = static_cast<double>(m) / n * 100;

    return percentage;
}

int main() {
    int n, m;
    cin >> n >> m;

    double result = cP(n, m);

    cout << setprecision(6) << result << endl;

    return 0;
}// Q lab 6