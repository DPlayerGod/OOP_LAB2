#include<bits/stdc++.h>

using namespace std;

int nRow, nCol;

int Sum(int x, int y, int u, int v, const vector<vector<int>> &S) {
    /*
        Ham tinh to hinh chu nhat co goc trai tren la (x, y) 
        va duoi phai la (u, v)
    */
    return S[u][v] - S[x - 1][v] - S[u][y - 1] + S[x - 1][y - 1];
}

int main() {
    cin >> nRow >> nCol; // So hang va so cot

    vector<vector<int>> Mat(nRow + 2, vector<int>(nCol + 2, 0));

    for (int j = 1; j <= nCol; j++)
        for (int i = 1; i <= nRow; i++)
            cin >> Mat[i][j];

    vector<vector<int>> S(nRow + 2, vector<int>(nCol + 2, 0));

    // Thuc hien mang tien to 2D
    for (int i = 1; i <= nRow; i++)
        for (int j = 1; j <= nCol; j++)
            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + Mat[i][j];

    
    for (int i = 1; i <= nRow; i++) {
        for (int j = 1; j <= nCol; j++) 
            for (int w = 2; w <= nRow - i + 1; w++)
                for (int h = 2; h <= nCol - j + 1; h++)
                    if (Sum(i, j, i + w - 1, j + h - 1, S) == w * h) {
                        cout << i - 1 << ' ' << j - 1 << ' ' << w << ' ' << h << '\n';
                    }
    }

}