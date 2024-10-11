#include "Thongtin.h"

using namespace std;

int main() {
    cout << "So thi sinh la : \n";
    int n;
    cin >> n;

    Thongtin* hocsinh = new Thongtin[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin cua thi sinh thu " << i + 1 << "\n";
        hocsinh[i].Nhap();
    }

    double diemCaoNhat = 0;

    cout << "Thong tin cua cac ban co diem tong cao hon 15 diem la : \n";
    for (int i = 0; i < n; i++) {   
        double sum = hocsinh[i].Tong();

        diemCaoNhat = max(diemCaoNhat, sum);

        if (sum > 15) hocsinh[i].Xuat();
    }

    cout << "Thong tin cua cac ban co diem tong cao nhat la : \n";

    for (int i = 0; i < n; i++) {   
        double sum = hocsinh[i].Tong();
        if (sum == diemCaoNhat) hocsinh[i].Xuat();
    }
    
}