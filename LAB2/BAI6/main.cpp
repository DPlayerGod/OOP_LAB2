#include "Tamgiac.h"
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    TamGiac tamgiac;

    tamgiac.NhapTamGiac();

    float x, y;
    cout << "Nhap huong xoay va do dai tinh tien tam giac : \n";
    cin >> x >> y;

    tamgiac.TinhTienTamGiac(x, y);

    tamgiac.XuatTamGiac();    
}
