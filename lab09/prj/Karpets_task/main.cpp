#include <iostream>
#include "ModulesKarpets.h"

using namespace std;

int main()
{
    system("chcp 65001 > nul");
    cout << "Введіть символ за заданим мануалом:" << endl;
    char order;
    cin >> order;
    switch (order) {
        case 'u':
            int x;
            int y;
            cout << "Введіть x:" << endl;
            cin >> x;
            cout << "Введіть y:" << endl;
            cin >> y;
            s_calculation(x, y);
            break;
        case 'o':
            int score;
            cout << "Введіть бал хвиль за Бофортом:" << endl;
            boff(score);
            break;
        case 'p':
            int n;
            int m;
            cout << "Введіть n:" << endl;
            cin >> n;
            cout << "Введіть m:" << endl;
            cin >> m;
            band(n, m);
            break;
        case 'a':
            int N;
            cout << "Введіть N:" << endl;
            cin >> N;
            bitband(N);
            break;
        case 's':
            exit(1);
            break;
        case 'S':
            exit(1);
            break;
        default:
            cout << "\a\a" << endl;
    }
    main();
}
