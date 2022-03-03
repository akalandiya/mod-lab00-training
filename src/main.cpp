// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    using std::cout;
    using std::cin;
    setlocale(LC_ALL, "Russian");
    int x, n;
    cout << "Введите число\n";
    cin >> x;
    cout << "Введите степень\n";
    cin >> n;
    cout << "\nРезультат: " << power(x, n);
    return 0;
}
