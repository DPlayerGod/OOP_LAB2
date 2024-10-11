#include "Diem.h"

int main() {
    // Khoi tao bang cac phuong thuc khac nhau
    Diem d1; // Khoi tao mac dinh
    Diem d2(3, 4); // Khoi tao voi tham so
    Diem d3(d2); // Khoi tao voi sao chep
    // Xuat cac toa do
    d1.Xuat();  // Hoanh do: 0, Tung do: 0
    d2.Xuat();  // Hoanh do: 3, Tung do: 4
    d3.Xuat();  // Hoanh do: 3, Tung do: 4

    cout << '\n';

    // Dat toa do
    d1.SetHoanhDo(10);
    d1.SetTungDo(20);
    cout << "Hoanh do cua d1: " << d1.GetHoanhDo() << '\n';
    cout << "Tung do cua d1: " << d1.GetTungDo() << '\n';

    // Tinh tien d2 
    d2.TinhTien(2, 3);
    d2.Xuat();  // Hoanh do: 5, Tung do: 7
}