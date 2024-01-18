#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Calculate the percentage of girls as (number of girls / total number of pupils) * 100
    double percentage = static_cast<double>(m) / n * 100;

    // Output the percentage with 4 decimal places of accuracy
    cout << fixed << setprecision(4) << percentage << endl;

    return 0;
}
