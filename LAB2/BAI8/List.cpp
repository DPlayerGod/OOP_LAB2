#include <iostream>
#include "List.h"
using namespace std;

List::List() {
    array = nullptr;
    size = 0;
}

// Destructor 
List::~List() {
    delete[] array;
}

// Them phan tu x vao List
void List::add(double x) {
    double* newArray = new double[size + 1];  
    for (unsigned int i = 0; i < size; i++) {
        newArray[i] = array[i]; 
    }
    newArray[size] = x;  
    size++;

    delete[] array;  
    array = newArray;  
}

// Xoa phan tu dau tien co gia tri x
void List::removeFirst(double x) {
    int index = -1;
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] == x) {
            index = i;
            break;
        }
    }
    // index la vi tri cua phan tu dau tien co gia tri x

    if (index != -1) {  
        double* newArray = new double[size - 1];
        for (unsigned int i = 0, j = 0; i < size; i++) {
            if (i != index) {
                newArray[j++] = array[i];
            }
        }
        size--;
        delete[] array;
        array = newArray;
    }
}

// Xoa tat ca phan tu co gia tri x
void List::removeAll(double x) {
    int count = 0;
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] == x) {
            count++;
        }
    }

    if (count > 0) {
        double* newArray = new double[size - count];
        for (unsigned int i = 0, j = 0; i < size; i++) {
            if (array[i] != x) {
                newArray[j++] = array[i];
            }
        }
        size -= count;
        delete[] array;
        array = newArray;
    }
}

// Thay the phan tu tai vi tri x bang y
void List::replace(unsigned int x, double y) {
    if (x < size) array[x] = y;
}

// Xuat danh sach cac phan tu trong list
void List::print() {
    cout << "[";
    for (unsigned int i = 0; i < size; i++) {
        cout << array[i];
        if (i < size - 1) {
            cout << ",";
        }
    }
    cout << "]" << '\n';
}
