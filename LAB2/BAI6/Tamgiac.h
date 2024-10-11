#pragma once 
#include<iostream>

using namespace std;

class TamGiac {
private:
    float x1, y1, x2, y2, x3, y3;

public:
    void NhapTamGiac();
    void XuatTamGiac();
    void TinhTienTamGiac(const float &x, const float &y);
};