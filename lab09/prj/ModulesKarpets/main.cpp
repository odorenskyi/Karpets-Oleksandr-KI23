#include <iostream>
#include<iomanip>
#include <cmath>


using namespace std;

void s_calculation(int x, int z)
{
    system("chcp 65001 > nul");
    float S;
    if (x >= 5) {
    S = pow(3 * sin(sqrt(12 * x * x/log10(x-3))),2) + 0.5 * z;
    cout << "S: " << setprecision(1) << fixed << S << endl;
    }
    else {
    cout << "Неможливо визначити, за властивістю логарифма x має бути більше або дорівнює 5" << endl;
    }
}

void boff(int score)
{
    system("chcp 65001 > nul");
    switch (score) {
        case 0:
            cout << "Швидкість відру: < 0.3 м/с. Характеристика вітру: Штиль" << endl;
            break;
        case 1:
            cout << "Швидкість відру: 0.3 – 1.5 м/с. Характеристика вітру: Тихий" << endl;
            break;
        case 2:
            cout << "Швидкість відру: 1.6 – 9.4 м/с. Характеристика вітру: Легкий" << endl;
            break;
        case 3:
            cout << "Швидкість відру: 9.4 – 5.4 м/с. Характеристика вітру: Слабкий" << endl;
            break;
        case 4:
            cout << "Швидкість відру: 5.5 – 7.9 м/с. Характеристика вітру: Помірний" << endl;
            break;
        case 5:
            cout << "Швидкість відру: 8.0 – 10.7 м/с. Характеристика вітру: Свіжий" << endl;
            break;
        case 6:
            cout << "Швидкість відру: 10.8 – 13.8 м/с. Характеристика вітру: Сильний" << endl;
            break;
        case 7:
            cout << "Швидкість відру: 13.9 – 17.1 м/с. Характеристика вітру: Міцний" << endl;
            break;
        case 8:
            cout << "Швидкість відру: 17.2 – 20.7 м/с. Характеристика вітру: Дуже міцний" << endl;
            break;
        case 9:
            cout << "Швидкість відру: 20.8 - 24.4 м/с. Характеристика вітру: Шторм" << endl;
            break;
        case 10:
            cout << "Швидкість відру: 24.5 – 28.4 м/с. Характеристика вітру: Сильний шторм" << endl;
            break;
        case 11:
            cout << "Швидкість відру: 28.5 – 32.6 м/с. Характеристика вітру: Шквальний шторм" << endl;
            break;
        case 12:
            cout << "Швидкість відру: >= 32.7 м/с. Характеристика вітру: Ураган(Буревій)" << endl;
            break;
        default:
            cout << "Даного балу сили вітру за шкалою Бофорта не існує" << endl;
            break;
	}
}

int band(int n, int m)
{
    system("chcp 65001 > nul");
    try {
    double n_m = pow(n,m);
    double m_n = pow(m,n);
    int number;
    cout << "n^m: " << n_m << ", m^n: " << m_n << endl;
    if (m < n) {
        number = n;
        n = m;
        m = number;
    }
    cout << "Непарні числа у діапазоні від " << n << " до " << m << ":" << endl;
    if (m - n == 2 || m - n == -2) {
            cout << "Немає непарних чисел у діапазоні" << endl;
            return 0;
    }
    while (n < m) {
        n++;
        if (n%2 != 0) {
                cout << n << endl;
            }
        }
    }
    catch (int err) {
    cout << "Було введено некоректні дані" << endl;
    }
}

int bitband(int N)
{
    system("chcp 65001 > nul");
    if (N < 0 || N > 80000) {
        cout << "Число вийшло за заданий діапазон (0 - 80000)" << endl;
        return 1;
    }
    int countONE;
    int countZERO;
    int desicion;
    int index = 0;
    while (N != 0) {
        if (index == 2 && N%2 == 1) {
            desicion = 1;
        }
        if (index == 2 && N%2 == 0) {
            desicion = 0;
        }
        if (N%2 == 1) {
            countONE += 1;
        }
        if (N%2 == 0) {
            countZERO += 1;
        }
        N/=2;
        index += 1;
    }
    if (index < 2) {
        cout << "Недостатньо бітів" << endl;
        return 1;
    }
    if (desicion == 1) {
        cout << "Кількість двійкових одиниць: " << countONE << endl;
    }
    else {
        cout << "Кількість двійкових нулів: " << countZERO << endl;
    }
    return 0;
}



