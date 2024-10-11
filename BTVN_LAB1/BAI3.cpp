#include<bits/stdc++.h>

using namespace std;

int ak, bk;

struct dat {
    int tu, mau;

    dat (int _tu = 0, int _mau = 0) {
        tu = _tu, mau = _mau;
    }

    bool operator < (const dat & oth) const {
        return tu * oth.mau < mau * oth.tu;
	}
};

void Input(int n, vector<dat> &A) {
    // Ham nhap mang phan so 

    for (int i = 0; i < n; i++) {
        int tu, mau;
        cout << "Nhap tu so cua phan so thu " << i + 1 << ": ";
        cin >> tu;

        cout << "Nhap mau so cua phan so thu " << i + 1 << ": ";
        cin >> mau;

        while (mau == 0) {
            cout << "Mau so khong hop le. Vui long nhap lai mau so: \n";

            cout << "Nhap mau so cua phan so thu " << i + 1 << ": ";
            cin >> mau;
        }
        
        // Loai bo dau tru
        if (mau < 0) {
            tu *= -1;
            mau *= -1;
        }
        A[i] = dat(tu, mau);
    }
}

int main() {
    int n;
    cout << "So phan so can nhap la : ";
    cin >> n;
    vector<dat> A(n);

    Input(n, A);

    sort(A.begin(), A.end());

    cout << "Nhap phan so a_k va b_k la :\n";
    cin >> ak >> bk;

    while (bk == 0) {
        cout << "Mau so khong hop le. Vui long nhap lai mau so: \n";
        cin >> bk;
    }

    // Sinh ra cac day nhi phan dai dien cho cac tap hop
    for (int mask = 0; mask < (1 << n); mask++) {
        int tu = 1, mau = 1;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                tu *= A[i].tu;
                mau *= A[i].mau;
            }
        }

        if (tu * bk == mau * ak) {
            cout << "Tap hop cac phan so thoa man la : \n";
            for (int i = 0; i < n; i++)
                if ((mask >> i) & 1) {
                    cout << A[i].tu << ' ' << A[i].mau << '\n';
                }
            break; // Thoat duyet
        }
    }
   
    return 0;
}