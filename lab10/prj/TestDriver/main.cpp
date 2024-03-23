#include <iostream>
#include "ModulesKarpets.h"
#include <fstream>

using namespace std;

int main()
{
    cout << "TASK 10.1 TEST:" << endl;
    ofstream test1 ("name.txt");
    test1 << "За останню добу рівень річки Дніпро в межах Києва піднявся на цілих 29 см, а за п'ять днів – на 45 см, проте на даний момент водопілля Києву загрози не несе.";
    test1.close();
    authorinfo("name.txt");
    ofstream test2 ("file.txt");
    test2 << "Центральноукраїнський національний технічний університет – провідний вищий навчальний заклад Центральної України, який готує фахівців за основними спеціальностями, актуальними для ключових галузей економіки країни. Кожен студент може подати заявки на вступ.";
    test2.close();
    authorinfo("file.txt");
    ofstream test3 ("nonefile.txt");
    test3 << "Ця програма була написана програмістом, але модуль писав студент.";
    test3.close();
    authorinfo("nonefile.txt");

    authorinfo("information.txt");

    ofstream test5 ("work.txt");
    test5 << "Зараз загальна кількість вагонів, задіяних у медичній евакуації в Україні, становить 62 одиниці.";
    test5.close();
    authorinfo("work.txt");
    cout << "END OF TEST 10.1" << endl;

    cout << "TASK 10.2 TEST:" << endl;
    ofstream test6 ("tests.txt");
    test6 << "Зараз загальна кількість вагонів, задіяних у медичній евакуації в Україні, становить 62 одиниці.";
    test6.close();
    numbersinfo("tests.txt");
    ofstream test7 ("mask.txt");
    test7 << "Не дивлячись на слова і дії їх засновника, це дуже великий прогрес як для людства. Сподіваюся в нас (людства) буде час щоб довести BFR до ладу і скористатися її перевагами.";
    test7.close();
    numbersinfo("mask.txt");
    ofstream test8 ("num.txt");
    test8 << "Нещодавно Apple випустила оновлення iOS 17.4";
    test8.close();
    numbersinfo("num.txt");
    ofstream test9 ("sdk.txt");
    test9 << "18 березня 2024 р. вийде Embedded App SDK.";
    test9.close();
    numbersinfo("sdk.txt");

    numbersinfo("all.txt");

    cout << "END OF TEST 10.2" << endl;


    cout << "TASK 10.3 TEST:" << endl;
    ofstream test11 ("str.txt");
    test11 << "Зараз загальна кількість вагонів, задіяних у медичній евакуації в Україні, становить 62 одиниці.";
    test11.close();
    str_calculation(10, 7, 3, "str.txt");
    ofstream test12 ("text.txt");
    test12 << "Тестування повинно бути модульним, але наразі структура як у системного.";
    test12.close();
    str_calculation(2, 4, 113, "text.txt");
    ofstream test13 ("txt.txt");
    test13 << "C++ має фреймфорк для створення графічних інтерфесів та Desktop додатків - QT";
    test13.close();
    str_calculation(6, 6, 87, "txt.txt");
    ofstream test14 ("lambda.txt");
    test14.close();
    str_calculation(11, 78, 0, "lambda.txt");

    str_calculation(12, 38, 43, "fiba.txt");

    cout << "END OF TEST 10.3" << endl;

    system("pause");
    return 0;
}

