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
    cout << "������ �������� x: ";
    cin >> x;
    cout << "������ �������� z: ";
    cin >> z;
    cout << "������ �������� a: ";
    cin >> a;
    cout << "������ �������� b: ";
    cin >> b;
    cout << endl;
    first();
    second(a, b);
    s_calculation(x, z);
    return 0;
}

void first()
{
    cout << "������� ��������� �" << endl;
}

void second(int a, int b)
{

    bool result;
    cout << boolalpha;
    result = a + 1 > abs(b-2);
    cout << result << endl;
}
