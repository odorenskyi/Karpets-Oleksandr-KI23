#include <iostream>
#include "ModulesKarpets.h"

void first();
void second(int a, int b);

using namespace std;

int main()
{
    int x;
    int z;
    int a;
    int b;
    system("chcp 1251 & cls");
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення z: ";
    cin >> z;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << endl;
    first();
    second(a, b);
    s_calculation(x, z);
    return 0;
}

void first()
{
    cout << "Карпець Олександр ©" << endl;
}

void second(int a, int b)
{

    bool result;
    cout << boolalpha;
    result = a + 1 > abs(b-2);
    cout << result << endl;
}
