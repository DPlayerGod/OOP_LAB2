#include "Diem.h"
#include "cmath"

Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
};

Diem::Diem(const double &Hoanh, const double &Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
};

Diem::Diem(const Diem &x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

void Diem::Xuat() {
    cout << "(" << iHoanh << "," << iTung << ")";
};

double Diem::GetTungDo() {
    return iTung;
};

double Diem::GetHoanhDo() {
    return iHoanh;
};

void Diem::SetTungDo(const double &Tung) {
    iTung = Tung;
};

void Diem::SetHoanhDo(const double &Hoanh) {
    iHoanh = Hoanh;
};

void Diem::TinhTien(const double &dx, const double &dy) {
    iHoanh += dx;
    iTung += dy;
};

void Diem::Quay(const double &theta) {
    double xMoi = iHoanh * cos(theta) - iTung * sin(theta);
    double yMoi = iHoanh * sin(theta) + iTung * cos(theta);
    iHoanh = xMoi;
    iTung = yMoi;
}