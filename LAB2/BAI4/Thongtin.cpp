#include "Thongtin.h"

void Thongtin::Nhap() {
    cout << "Nhap ten thi sinh \n";
    cin.ignore();
    getline(cin, Ten);

    cout << "Nhap MSSV \n";
    cin >> MSSV;

    cout << "Nhap ngay thang nam sinh cua thi sinh\n";
    cin >> iNgay >> iThang >> iNam;

    cout << "Nhap diem Toan\n"; 
    cin >> fToan;

    cout << "Nhap diem Van\n";
    cin >> fVan;

    cout << "Nhap diem Anh\n";
    cin >> fAnh;
}

void Thongtin::Xuat() const {
    cout << "Ten thi sinh la : \n";
    cout << Ten << '\n';

    cout << "MSSV cua thi sinh la : \n";
    cout << MSSV << '\n';

    cout << "Ngay thang nam sinh cua thi sinh la : \n";
    cout << iNgay << '/' << iThang << '/' << iNam << '\n';

    cout << "Diem Toan cua thi sinh la : \n"; 
    cout << fToan << '\n';

    cout << "Diem Van cua thi sinh la : \n";
    cout << fVan << '\n';

    cout << "Diem Anh cua thi sinh la : \n";
    cout << fAnh << '\n';
    cout << '\n';
}

double Thongtin::Tong() const {
    return fVan + fToan + fAnh;
}