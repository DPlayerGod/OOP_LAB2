#include "Tamgiac.h"

#define PI 3.141592653589793

int main() {
    TamGiac tg;
    
    // Nhap cac diem cua tam giac
    tg.NhapTamGiac();
    
    // Xuat toa do cua tam giac
    cout << "Toa do tam giac ban dau:\n";
    tg.XuatTamGiac();

    // Tinh tien tam giac
    tg.TinhTienTamGiac(2, 3);
    cout << "Toa do tam giac sau khi tinh tien (2, 3):\n";
    tg.XuatTamGiac();

    // Phong to tam giac
    tg.PhongToTamGiac(2);
    cout << "Toa do tam giac sau khi phong to 2 lan:\n";
    tg.XuatTamGiac();

    // Thu nho tam giac
    tg.ThuNhoTamGiac(2);
    cout << "Toa do tam giac sau khi thu nho 2 lan:\n";
    tg.XuatTamGiac();

    // Quay tam giac 90 do
    tg.QuayTamGiac(PI / 2);
    cout << "Toa do tam giac sau khi quay 90 do:\n";
    tg.XuatTamGiac();

    return 0;
}
