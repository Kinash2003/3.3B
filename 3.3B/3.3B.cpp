//3.3B.cpp
#include <iostream>
#include <Windows.h> 
#include "LongLong.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    LongLong A, B, C;

    cout << " Введіть A числа: " << endl;
    cin >> A;
    
    cout << " Введіть B числа: "  << endl;
    cin >> B;
    
    cout << " A + B: " << endl;
    cout << A + B << endl;

    cout << " A * B: " << endl;
    cout << A * B << endl;

    cout << " A > B " << endl;
    if (A > B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A < B " << endl;
    if (A < B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A == B " << endl;
    if (A == B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A++ " << endl; cout << A++ << endl;
    cout << " A-- " << endl; cout << A-- << endl;
    cout << " ++A " << endl; cout << ++A << endl;
    cout << " --A " << endl; cout << --A << endl;
    return 0;
}