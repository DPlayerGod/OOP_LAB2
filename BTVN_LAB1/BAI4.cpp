#include<bits/stdc++.h>


using namespace std;

// Ham ap dung phep bien doi
vector<vector<int>> BienDoiMap(const vector<vector<int>>& mat, int m) {
    vector<vector<int>> newMat(m, vector<int>(m));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            // Áp dụng phép biến đổi
            int newX = (2 * i + j) % m;
            int newY = (i + j) % m;
            newMat[newX][newY] = mat[i][j];
        }
    }
    return newMat;
}

// Ham kiem tra hai ma tran co bang nhau khong
bool KiemTra(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
    int m = mat1.size();
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mat1[i][j] != mat2[i][j]) return false;
        }
    }
    return true;
}

int main() {
    int m;
    // Nhap kich thuoc ma tran
    cin >> m;
    
    // Khoi tao ma tran ban dau
    vector<vector<int>> originalMat(m, vector<int>(m));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> originalMat[i][j];
        }
    }

    // Sao luu ma tran de tim ra chu ky
    vector<vector<int>> currentMat = originalMat;
    
    int cycle = 0;
    do {
        currentMat = BienDoiMap(currentMat, m);
        cycle++;
    } while (!KiemTra(originalMat, currentMat));
    
    // Xuat ra chu ky
    cout << cycle;

    return 0;
}
