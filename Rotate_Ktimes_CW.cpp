#include <bits/stdc++.h>
using namespace std;

void Print2DArrayVector(vector<vector<int>> &arr, int k)
{
    int row = arr.size();
    int col = arr[0].size();

    // cout << "Matrix Rotate " << k * 90 << " degree in Clockwise Direction" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotatektimes(vector<vector<int>> &matrix, int k, int n)
{
    for (int m = 0; m < k; m++)
    {
        // Reverse Col
        for (int j = 0; j < n; j++)
        {
            int start = 0, end = n - 1;
            while (start < end)
            {
                swap(matrix[start][j], matrix[end][j]);
                start++;
                end--;
            }
        }

        // Transpose Matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    Print2DArrayVector(matrix, k);
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int n = matrix.size();
    int k;
    cout << "Enter How Many time Matrix Rotate? : ";
    cin >> k;

    k = k % n;
    rotatektimes(matrix, k, n);
    return 0;
}

// For k = 1(90°)
// 13 9 5 1
// 14 10 6 2
// 15 11 7 3
// 16 12 8 4