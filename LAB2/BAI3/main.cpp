#include <iostream>
#include "Dagiac.h"

#define PI 3.141592653589793

using namespace std;

int main() {
    DaGiac daGiac;

    // Nhap thong tin da giac
    daGiac.NhapDaGiac();

    // Xuat thong tin da giac
    cout << "Toa do da giac ban dau:\n";
    daGiac.XuatDaGiac();

    // Tinh tien da giac
    daGiac.TinhTienDaGiac(2, 3);
    cout << "\nToa do da giac sau khi tinh tien (2, 3):\n";
    daGiac.XuatDaGiac();

    // Phong to da giac
    daGiac.PhongToDaGiac(2);
    cout << "\nToa do da giac sau khi phong to 2 lan:\n";
    daGiac.XuatDaGiac();

    // Thu nho da giac
    daGiac.ThuNhoDaGiac(2);
    cout << "\nToa do da giac sau khi thu nho 2 lan:\n";
    daGiac.XuatDaGiac();

    // Quay da giac 90 do
    daGiac.QuayDaGiac(PI / 4);
    cout << "\nToa do da giac sau khi quay 45 do:\n";
    daGiac.XuatDaGiac();

    return 0;
}