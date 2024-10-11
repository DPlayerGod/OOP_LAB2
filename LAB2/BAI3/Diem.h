#pragma once 
#include<iostream>
using namespace std;

class Diem 
{
private:
    double iHoanh, iTung;
public:
    Diem();
    Diem(const double &Hoanh, const double &Tung);
    Diem (const Diem &x);
    void Xuat();
    double GetTungDo();
    double GetHoanhDo();
    void SetTungDo(const double &Tung);
    void SetHoanhDo(const double &Hoanh);
    void TinhTien(const double &dx, const double &dy);
    void Quay(const double &theta);
};
