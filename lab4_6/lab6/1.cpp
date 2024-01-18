#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Calculate the percentage of girls as (number of girls / total number of pupils) * 100
    float percentage = static_cast<double>(m) / n * 100;

    // Output the percentage with 2 decimal places of accuracy
    /if(percentage % 10 == 0){
        cout<< percentage;
    }else{
        cout << fixed << setprecision(4) << percentage << endl;
    }
    

    return 0;
}61 16

--- Output: size 3 ---
26

--- Correct: size 8 ---
26.2295