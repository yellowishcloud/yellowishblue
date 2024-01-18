#include <iostream>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    int arr[1000][1000];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num = arr[i][j];
            if (num > largest) {
                second_largest = largest;
                largest = num;
            } else if (num > second_largest && num != largest) {
                second_largest = num;
            }
        }
    }

    if (largest == second_largest) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << second_largest << std::endl;
    }

    return 0;
}
