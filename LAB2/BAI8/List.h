#pragma once
#include <iostream>
using namespace std;

class List {
private:
    double* array;      // Quan li mang
    unsigned int size;  // Kich thuoc cua list

public:
    List();

    ~List();

    void add(double x);
    void removeFirst(double x);
    void removeAll(double x);
    void replace(unsigned int x, double y);
    void print();
};
