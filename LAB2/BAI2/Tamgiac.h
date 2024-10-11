#pragma once 
#include<iostream>
#include "Diem.h"

using namespace std;

class TamGiac {
private:
    Diem A, B, C; 

public:
    void NhapTamGiac();
    void XuatTamGiac();
    void TinhTienTamGiac(const double &dx, const double &dy);
    void PhongToTamGiac(const double &scale);
    void ThuNhoTamGiac(const double &scale);
    void QuayTamGiac(const double &theta);
};