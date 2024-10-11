#include "Diem.h"
#include "Tamgiac.h"
#include <cmath>

void TamGiac::NhapTamGiac() {
    int hoanh, tung;
    cout << "Nhap toa do dinh A:\n";
    cout << "Hoanh do: "; cin >> hoanh;
    cout << "Tung do: "; cin >> tung;
    A.SetHoanhDo(hoanh);
    A.SetTungDo(tung);

    cout << "Nhap toa do dinh B:\n";
    cout << "Hoanh do: "; cin >> hoanh;
    cout << "Tung do: "; cin >> tung;
    B.SetHoanhDo(hoanh);
    B.SetTungDo(tung);

    cout << "Nhap toa do dinh C:\n";
    cout << "Hoanh do: "; cin >> hoanh;
    cout << "Tung do: "; cin >> tung;
    C.SetHoanhDo(hoanh);
    C.SetTungDo(tung);
}

void TamGiac::XuatTamGiac() {
    cout << "Dinh A: "; A.Xuat();
    cout << "\nDinh B: "; B.Xuat();
    cout << "\nDinh C: "; C.Xuat();
    cout << endl;
}

void TamGiac::TinhTienTamGiac(const double &dx, const double &dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void TamGiac::PhongToTamGiac(const double &scale) {
    A.SetHoanhDo(A.GetHoanhDo() * scale);
    A.SetTungDo(A.GetTungDo() * scale);
    B.SetHoanhDo(B.GetHoanhDo() * scale);
    B.SetTungDo(B.GetTungDo() * scale);
    C.SetHoanhDo(C.GetHoanhDo() * scale);
    C.SetTungDo(C.GetTungDo() * scale);
}

void TamGiac::ThuNhoTamGiac(const double &scale) {
    A.SetHoanhDo(A.GetHoanhDo() / scale);
    A.SetTungDo(A.GetTungDo() / scale);
    B.SetHoanhDo(B.GetHoanhDo() / scale);
    B.SetTungDo(B.GetTungDo() / scale);
    C.SetHoanhDo(C.GetHoanhDo() / scale);
    C.SetTungDo(C.GetTungDo() / scale);
}

void TamGiac::QuayTamGiac(const double &theta) {
    A.Quay(theta);
    B.Quay(theta);
    C.Quay(theta);
}