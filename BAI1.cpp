#include<bits/stdc++.h>

using namespace std;

vector<int> tu, mau;

int ucln(int a, int b) {
    /*
        ucln(a, b) : Ham tim uoc chung lon nhat cua hai so a, b
    */
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void rutGonPhanSo(int &tu, int &mau) {
    /*
        rutGonPhanSo(tu, mau) : Ham rut gon phan so
    */
    int ucln_ = ucln(tu, mau);
    tu /= ucln_;
    mau /= ucln_;
}

void Input(int i) {
    /*
        Input(i) : Ham doc phan so thu i
    */

    cout << "Nhap tu so cua phan so thu " << i << ": ";
    cin >> tu[i];

    cout << "Nhap mau so cua phan so thu " << i << ": ";
    cin >> mau[i];

    while (mau[i] == 0) {
        cout << "Mau so khong hop le. Vui long nhap lai mau so: \n";
        cin >> mau[i];
    }

    rutGonPhanSo(tu[i], mau[i]);

    if (mau[i] < 0) {
        // Loai bo dau tru
        tu[i] *= -1;
        mau[i] *= -1;
    }
}

int main() {
    int n;
    cout << "So phan so can nhap la : ";
    cin >> n;

    mau.resize(n + 2);
    tu.resize(n + 2);

    double mi = 1e9;
    double mx = -1e9;

    for (int i = 1; i <= n; i++) Input(i);

    // Tim ra gia tri phan so nho nhat va lon nhat
    for (int i = 1; i <= n; i++) {
        mi = min(mi, 1.0 * tu[i] / mau[i]);
        mx = max(mx, 1.0 * tu[i] / mau[i]);
    }   

    cout << "Phan so nho nhat la : \n";
    // Tim ra tu va mau cua phan so nho nhat
    for (int i = 1; i <= n; i++) {
        if ((1.0 * tu[i] / mau[i]) == mi) {
            cout << tu[i] << ' ' << mau[i] << '\n';
            break;
        }
    }

    cout << "Phan so lon nhat la : \n";
    // Tim ra tu va mau cua phan so lon nhat
    for (int i = 1; i <= n; i++) {
        if ((1.0 * tu[i] / mau[i]) == mx) {
            cout << tu[i] << ' ' << mau[i] << '\n';
            break;
        }
    }

    return 0;
}