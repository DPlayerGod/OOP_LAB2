#pragma once
#include "iostream"

using namespace std;

class Thongtin {
private:
    string Ten;
    int MSSV;
    int iNgay, iThang, iNam;
    double fToan, fVan, fAnh;

public:
    void Nhap();
    void Xuat() const;
    double Tong() const;
};