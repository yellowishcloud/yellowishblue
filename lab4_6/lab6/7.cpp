#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    
    int percentage = static_cast<double>(m) / n * 100;

    
    cout << setprecision(2) << percentage << endl;

    return 0;
}