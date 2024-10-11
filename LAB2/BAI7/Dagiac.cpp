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
    cout << "Nhap so dinh cua da giac: \n";
    cin >> n;

    while (n < 3) {
        cout << "Vui long nhap lai so dinh cua da giac : \n";
        cin >> n;
    }

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

// Ham tinh dien tich da giac
double DaGiac::TinhDienTichDaGiac() const {
    float area = 0;

    // Ap dung cong thuc Shoelace
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;  
        area += Dinh[i].GetHoanhDo() * Dinh[j].GetTungDo() - Dinh[j].GetHoanhDo() * Dinh[i].GetTungDo();
    }

    return abs(area) / 2.0;
}