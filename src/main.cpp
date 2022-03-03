// Copyright 2022 UNN-IASR
#include "fun.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian"); 
    int x, n;
    cout << "Введите число" << endl;
    cin >> x;
    cout << "Введите степень" << endl;
    cin >> n;
    cout << "Результат: " << power(x,n) << endl;
    return 0;
}
