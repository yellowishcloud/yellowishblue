#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int> > matrix(n, std::vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::vector<int> min_values(m, INT_MAX);
    std::vector<int> min_row_indices(m, -1);

    // Find the minimum values in each column and their row indices.
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] < min_values[j]) {
                min_values[j] = matrix[i][j];
                min_row_indices[j] = i;
            }
        }
    }

    // Calculate the sum of the minimum values.
    int min_sum = 0;
    for (int j = 0; j < m; j++) {
        min_sum += min_values[j];
    }

    // Output coordinates of the minimum elements in each column.
    std::cout << "coordinates of min elements: " << std::endl;
    for (int j = 0; j < m; j++) {
        std::cout << min_row_indices[j] + 1 << ";" << j + 1 << std::endl;
    }

    // Output the sum of the minimum values.
    std::cout << "\nTheir sum:" << std::endl;
    std::cout << min_sum << std::endl;

    return 0;
}

