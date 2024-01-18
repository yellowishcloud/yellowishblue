#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[1000][1000];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    int l = INT_MIN;
    int sl = INT_MIN;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num = arr[i][j];
            if (num > l) {
                sl = l;
                l = num;
            } else if (num > sl && num != l) {
                sl = num;
            }
        }
    }

    if (l == sl) {
        cout << 0 << endl;
    } else {
        cout << sl << endl;
    }

    return 0;
}