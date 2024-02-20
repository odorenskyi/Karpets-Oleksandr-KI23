#include <iostream>
#include "ModulesKarpets.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    cout << "TC_01: ";
    s_calculation(10, 15);
    cout << "TC_02: ";
    s_calculation(1, 23);
    cout << "TC_03: ";
    s_calculation(5, 9);
    cout << "TC_04: ";
    s_calculation(0, 3);
    cout << "TC_05: ";
    s_calculation(14, 0);
    cout << "TC_06: ";
    s_calculation(0, 0);
    cout << "TC_07: ";
    s_calculation(-5, -23);
    cout << "TC_08: ";
    s_calculation(-5, 87);
    cout << "TC_09: ";
    s_calculation(11, -9);
    cout << "TC_10: ";
    s_calculation(7, 129);
    return 0;
}
