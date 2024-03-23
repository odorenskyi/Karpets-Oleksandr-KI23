#include <iostream>
#include "ModulesKarpets.h"
#include <fstream>

using namespace std;

int main()
{
    cout << "TASK 10.1 TEST:" << endl;
    ofstream test1 ("name.txt");
    test1 << "�� ������� ���� ����� ���� ����� � ����� ���� ������� �� ����� 29 ��, � �� �'��� ��� � �� 45 ��, ����� �� ����� ������ �������� ���� ������� �� ����.";
    test1.close();
    authorinfo("name.txt");
    ofstream test2 ("file.txt");
    test2 << "�������������������� ������������ �������� ���������� � �������� ����� ���������� ������ ���������� ������, ���� ���� �������� �� ��������� ���������������, ����������� ��� �������� ������� �������� �����. ����� ������� ���� ������ ������ �� �����.";
    test2.close();
    authorinfo("file.txt");
    ofstream test3 ("nonefile.txt");
    test3 << "�� �������� ���� �������� �����������, ��� ������ ����� �������.";
    test3.close();
    authorinfo("nonefile.txt");

    authorinfo("information.txt");

    ofstream test5 ("work.txt");
    test5 << "����� �������� ������� ������, ������� � ������� ��������� � �����, ��������� 62 �������.";
    test5.close();
    authorinfo("work.txt");
    cout << "END OF TEST 10.1" << endl;

    cout << "TASK 10.2 TEST:" << endl;
    ofstream test6 ("tests.txt");
    test6 << "����� �������� ������� ������, ������� � ������� ��������� � �����, ��������� 62 �������.";
    test6.close();
    numbersinfo("tests.txt");
    ofstream test7 ("mask.txt");
    test7 << "�� ��������� �� ����� � 䳿 �� ����������, �� ���� ������� ������� �� ��� �������. ��������� � ��� (�������) ���� ��� ��� ������� BFR �� ���� � ������������ �� ����������.";
    test7.close();
    numbersinfo("mask.txt");
    ofstream test8 ("num.txt");
    test8 << "��������� Apple ��������� ��������� iOS 17.4";
    test8.close();
    numbersinfo("num.txt");
    ofstream test9 ("sdk.txt");
    test9 << "18 ������� 2024 �. ����� Embedded App SDK.";
    test9.close();
    numbersinfo("sdk.txt");

    numbersinfo("all.txt");

    cout << "END OF TEST 10.2" << endl;


    cout << "TASK 10.3 TEST:" << endl;
    ofstream test11 ("str.txt");
    test11 << "����� �������� ������� ������, ������� � ������� ��������� � �����, ��������� 62 �������.";
    test11.close();
    str_calculation(10, 7, 3, "str.txt");
    ofstream test12 ("text.txt");
    test12 << "���������� ������� ���� ���������, ��� ����� ��������� �� � ����������.";
    test12.close();
    str_calculation(2, 4, 113, "text.txt");
    ofstream test13 ("txt.txt");
    test13 << "C++ �� ��������� ��� ��������� ��������� ��������� �� Desktop ������� - QT";
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

