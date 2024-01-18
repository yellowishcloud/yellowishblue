#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n][n];

    int num = 1;
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = n - 1;

    while (row_start <= row_end && col_start <= col_end) {
        for (int j = col_start; j <= col_end; ++j) {
            ar[row_start][j] = num++;
        }
        ++row_start; 
        for (int i = row_start; i <= row_end; ++i) {
            ar[i][col_end] = num++;
        }
        --col_end; 
        for (int j = col_end; j >= col_start; --j) {
            ar[row_end][j] = num++;
        }
        --row_end;
        for (int i = row_end; i >= row_start; --i) {
            ar[i][col_start] = num++;
        }
        ++col_start;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}// cpiral M lab 4

