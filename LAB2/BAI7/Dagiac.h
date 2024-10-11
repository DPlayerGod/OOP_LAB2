#pragma once 
#include<iostream>
#include "Diem.h"
using namespace std;

class DaGiac {
private:
    int n;        // So dinh cua da giac
    Diem *Dinh;   // Mang dong chua cac dinh

public:
    DaGiac();                 // Constructor mac dinh
    DaGiac(int soDinh);        // Constructor voi so dinh
    ~DaGiac();                // Destructor

    void NhapDaGiac();               
    void XuatDaGiac() const;        
    double TinhDienTichDaGiac() const;
};