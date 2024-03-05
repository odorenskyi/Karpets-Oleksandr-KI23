#include <iostream>
#include "ModulesKarpets.h"
using namespace std;

int main()
{
    cout << "\n\n9.1\n\n\n\n\n" << endl;
    boff(10);
    boff(1);
    boff(9);
    boff(3);
    boff(0);
    boff(6);
    boff(-5);
    boff(100);
    boff(11);
    boff(7);

    cout << "\n\n9.2\n\n\n\n\n" << endl;
    band(10, 2);
    band(1, 7);
    band(11, 9);
    band(23, 45);
    band(12, 3);
    band(6, 6);
    band(-5, -10);
    band(10, 5.0);
    band(14, 21);
    band(7, 9);

    cout << "\n\n9.3\n\n\n\n\n" << endl;
    bitband(11);
    bitband(12);
    bitband(90);
    bitband(8);
    bitband(1);
    bitband(36);
    bitband(7);
    bitband(4);
    bitband(21);
    bitband(14);
    return 0;
}
