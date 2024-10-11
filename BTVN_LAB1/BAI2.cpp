#include<bits/stdc++.h>

using namespace std;

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

    
    cout << "Nhap so thu k : \n";
    int k;
    cin >> k;

    if (k <= n) {
        cout << "Phan so be thu k la : \n";
        cout << A[k - 1].tu << ' ' << A[k - 1].mau << '\n';

        cout << "Phan so lon thu k la : \n";

        cout << A[n - k].tu << ' ' << A[n - k].mau;
    }

   
    return 0;
}