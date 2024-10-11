#include "Dagiac.h"

DaGiac::DaGiac() {
    n = 0;
    Dinh = nullptr;
}

// Constructor co tham so
DaGiac::DaGiac(int soDinh) {
    n = soDinh;
    Dinh = new Diem[n];  
}

// Destructor
DaGiac::~DaGiac() {
    delete[] Dinh;  
}

// Nhap da giac
void DaGiac::NhapDaGiac() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh = new Diem[n];  

    for (int i = 0; i < n; i++) {
        int hoanh, tung;
        cout << "Nhap toa do dinh " << i + 1 << ":\n";
        cout << "Hoanh do: "; cin >> hoanh;
        cout << "Tung do: "; cin >> tung;
        Dinh[i].SetHoanhDo(hoanh);
        Dinh[i].SetTungDo(tung);
    }
}

// Phuong thuc Xuat
void DaGiac::XuatDaGiac() const {
    for (int i = 0; i < n; i++) {
        cout << "Dinh " << i + 1 << ": ";
        Dinh[i].Xuat();
        cout << '\n';
    }
}

// Phuong thuc TinhTien()
void DaGiac::TinhTienDaGiac(const double &dx, const double &dy) {
    for (int i = 0; i < n; i++) {
        Dinh[i].TinhTien(dx, dy);  // Tinh tien tung dinh
    }
}

// Phuong thuc phong to
void DaGiac::PhongToDaGiac(const double &scale) {
    for (int i = 0; i < n; i++) {
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() * scale);
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() * scale);
    }
}

// Phuc thuc thu nho
void DaGiac::ThuNhoDaGiac(const double &scale) {
    for (int i = 0; i < n; i++) {
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() / scale);
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() / scale);
    }
}

// Phuong thuc quay
void DaGiac::QuayDaGiac(const double &theta) {
    for (int i = 0; i < n; i++) {
        Dinh[i].Quay(theta);  
    }
}