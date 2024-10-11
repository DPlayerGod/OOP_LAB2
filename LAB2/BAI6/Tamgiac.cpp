#include "Tamgiac.h"
#include <cmath>

#define PI 3.14

void TamGiac::NhapTamGiac() {
    int hoanh, tung;
    cout << "Nhap toa do dinh 1:\n";
    cout << "Hoanh do: "; cin >> x1;
    cout << "Tung do: "; cin >> y1;

    cout << "Nhap toa do dinh 2:\n";
    cout << "Hoanh do: "; cin >> x2;
    cout << "Tung do: "; cin >> y2;

    cout << "Nhap toa do dinh 3:\n";
    cout << "Hoanh do: "; cin >> x3;
    cout << "Tung do: "; cin >> y3;
}

void TamGiac::XuatTamGiac() {
    cout << "(" << x1 << ',' << y1 << ")" << "\n";
    cout << "(" << x2 << ',' << y2 << ")" << "\n";
    cout << "(" << x3 << ',' << y3 << ")" << "\n";
}

void TamGiac::TinhTienTamGiac(const float &x, const float &y) {
    // Chuyen tu do sang radian
    float rad = x / 180 * PI;

    x1 = x1 + y * cos(rad);
    y1 = y1 + y * sin(rad);

    x2 = x2 + y * cos(rad);
    y2 = y2 + y * sin(rad);

    x3 = x3 + y * cos(rad);
    y3 = y3 + y * sin(rad);
}
