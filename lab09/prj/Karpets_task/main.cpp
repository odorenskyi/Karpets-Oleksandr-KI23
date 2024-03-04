#include <iostream>
#include "ModulesKarpets.h"

void first();
void second(int a, int b);

using namespace std;

int main()
{
    int x;
    signed int z;
    int a;
    signed int b;
    system("chcp 65001 & cls");
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
    cout << "x у шістнадцятковій формі: " << hex << x << endl;
    cout << "z у шістнадцятковій формі: " << hex << z << endl;
    cout << "x у вісімковій формі: " << oct << x << endl;
    cout << "z у вісімковій формі: " << oct << z << endl;
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
