#include <iostream>
#include<iomanip>
#include <cmath>


using namespace std;

void s_calculation(int x, int z)
{
    float S;
    if (x >= 5) {
    S = pow(3 * sin(sqrt(12 * x * x/log10(x-3))),2) + 0.5 * z;
    cout << "S: " << setprecision(1) << fixed << S << endl;
    }
    else {
    cout << "��������� ���������, �� ���������� ��������� x �� ���� ����� ��� ������� 5" << endl;
    }
}
