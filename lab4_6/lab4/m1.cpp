#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n; 
    int a[n][n];
    int len = n,k = 1, p = 0, i; /*k is to assign the values to the array from 1...n*n */
    /*len is used to update(decrease) array size so that values cans be assign to them */
    while (k <= n * n) {
        for (i = p; i < len; i++) /*Loop to access the first row of the array*/
        {
            a[p][i] = k;
            k++;
        }
        for (i = p + 1; i < len; i++) /*Loop tp access the last column of the array*/
        {
            a[i][len - 1] = k;
            k++;
        }
        for (i = len - 2; i >= p; i--) /*Loop to access the last row of the array*/
        {
            a[len - 1][i] = k;
            k++;
        }
        for (i = len - 2; i > p; i--) /*Loop to access the first column of the array*/
        {
            a[i][p] = k;
            k++;
        }
        p++, len = len - 1;
    }
    if (!n % 2) 
    {
        a[(n + 1) / 2][(n + 1) / 2] = n * n; //если он одд то назначет туда n*n
    }
    for (i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}