#include "Diem.h"

int main() {
    // Khoi tao bang cac phuong thuc khac nhau
    
    double x, y;

    cout << "Nhap toa do (x, y) : \n";
    cin >> x >> y;
    
    Diem d(x, y);


    cout << "So thao tac thuc hien : \n";

    int m; 
    cin >> m;

    while (m--) {
        cout << "Nhap so x \n";
        int x;
        cin >> x;

        if (x == 1) {
            // Nhan doi hoanh do va tung do
            d.SetHoanhDo(d.GetHoanhDo() * 2);
            d.SetTungDo(d.GetTungDo() * 2);
        }
        else if (x == 2) {
            // Dua ve goc toa do
            d.SetHoanhDo(0);
            d.SetTungDo(0);
        } 
        else if (x == 3) {
            int k;
            double dodai;

            cout << "Nhap huong tinh tien va doi dai tinh tien : \n";
            cin >> k >> dodai;

            if (k == 0) d.SetHoanhDo(d.GetHoanhDo() + dodai);
            else d.SetTungDo(d.GetTungDo() + dodai);
        }
    }

    d.Xuat();
}