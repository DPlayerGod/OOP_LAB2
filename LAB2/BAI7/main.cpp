#include <iostream>
#include "Dagiac.h"

#define PI 3.141592653589793

using namespace std;

int main() {
    DaGiac daGiac;

    // Nhap thong tin da giac
    daGiac.NhapDaGiac();

    cout << "Dien tich cua da giac la : \n";
    cout << daGiac.TinhDienTichDaGiac();

    return 0;
}