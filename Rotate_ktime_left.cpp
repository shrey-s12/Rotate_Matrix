#include <bits/stdc++.h>
using namespace std;

void Print2DArrayVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateMatrixLeft(vector<vector<int>> mat, int k, int row, int col)
{
    for (int m = 0; m < k; m++)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col - 1; j++)
            {
                swap(mat[i][j], mat[i][j + 1]);
            }
        }
    }

    Print2DArrayVector(mat);
}

int main()
{
    vector<vector<int>> mat = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22},
        {23, 24, 25, 26},
        {27, 28, 29, 30},
    };

    int row = mat.size();
    int col = mat[0].size();

    int k;
    cout << "Enter How Many time Matrix Rotate Left? : ";
    cin >> k;

    k = k % col;
    rotateMatrixLeft(mat, k, row, col);
    return 0;
}