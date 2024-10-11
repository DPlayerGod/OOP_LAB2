#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List list;
    int n;

    while (true) {
        cout << "Nhap chi thi (0: them, 1: xoa dau tien, 2: xoa tat ca, 3: thay the, -1: thoat): \n";
        cin >> n;

        if (n == -1) break;

        if (n == 0) {
            double x;
            cout << "Nhap gia tri x: ";
            cin >> x;
            list.add(x);
        }
        else if (n == 1) {
            double x;
            cout << "Nhap gia tri can xoa x: ";
            cin >> x;
            list.removeFirst(x);
        }
        else if (n == 2) {
            double x;
            cout << "Nhap gia tri can xoa x: ";
            cin >> x;
            list.removeAll(x);
        }
        else if (n == 3) {
            unsigned int x;
            double y;
            cout << "Nhap vi tri can thay the x va gia tri y: ";
            cin >> x >> y;
            list.replace(x, y);
        }
        else {
            cout << "Chi thi khong hop le!" << '\n';
        }
    }
    
    // In ra danh sach hien tai
    list.print();

    return 0;
}
