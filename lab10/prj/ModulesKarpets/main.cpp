#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include<iomanip>
#include <cmath>
#include <fstream>

using namespace std;

float s_calculation(int x, int z)
{
    system("chcp 65001 > nul");
    float S;
    if (x >= 5) {
    S = pow(3 * sin(sqrt(12 * x * x/log10(x-3))),2) + 0.5 * z;
    setprecision(1);
    fixed;
    return S;
    }
    else {
    return -1;
    }
}

void boff(int score)
{
    system("chcp 65001 > nul");
    switch (score) {
        case 0:
            cout << "�������� ����: < 0.3 �/�. �������������� ����: �����" << endl;
            break;
        case 1:
            cout << "�������� ����: 0.3 � 1.5 �/�. �������������� ����: �����" << endl;
            break;
        case 2:
            cout << "�������� ����: 1.6 � 9.4 �/�. �������������� ����: ������" << endl;
            break;
        case 3:
            cout << "�������� ����: 9.4 � 5.4 �/�. �������������� ����: �������" << endl;
            break;
        case 4:
            cout << "�������� ����: 5.5 � 7.9 �/�. �������������� ����: �������" << endl;
            break;
        case 5:
            cout << "�������� ����: 8.0 � 10.7 �/�. �������������� ����: �����" << endl;
            break;
        case 6:
            cout << "�������� ����: 10.8 � 13.8 �/�. �������������� ����: �������" << endl;
            break;
        case 7:
            cout << "�������� ����: 13.9 � 17.1 �/�. �������������� ����: ̳����" << endl;
            break;
        case 8:
            cout << "�������� ����: 17.2 � 20.7 �/�. �������������� ����: ���� �����" << endl;
            break;
        case 9:
            cout << "�������� ����: 20.8 - 24.4 �/�. �������������� ����: �����" << endl;
            break;
        case 10:
            cout << "�������� ����: 24.5 � 28.4 �/�. �������������� ����: ������� �����" << endl;
            break;
        case 11:
            cout << "�������� ����: 28.5 � 32.6 �/�. �������������� ����: ��������� �����" << endl;
            break;
        case 12:
            cout << "�������� ����: >= 32.7 �/�. �������������� ����: ������(������)" << endl;
            break;
        default:
            cout << "������ ���� ���� ���� �� ������ ������� �� ����" << endl;
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
    if (m - n == 2 || m - n == -2) {
            cout << "���� �������� ����� � �������" << endl;
            return 0;
    }
    else {
            cout << "������ ����� � ������� �� " << n << " �� " << m << ":" << endl;
    }
    while (n < m-1) {
        n++;
        if (n%2 != 0) {
                cout << n << endl;
            }
        }
    }
    catch (int err) {
    cout << "���� ������� ��������� ���" << endl;
    }
}

int bitband(int N)
{
    system("chcp 65001 > nul");
    if (N < 0 || N > 80000) {
        cout << "����� ������ �� ������� ������� (0 - 80000)" << endl;
        return 1;
    }
    int bin = 0, k = 1;
    while (N)
    {
        bin += (N%2) * k;
        k *= 10;
        N/=2;

    }
    string str = to_string(bin);
    int countONE = count(str.begin(), str.end(), '1');
    int countZERO = count(str.begin(), str.end(), '0');
    reverse(str.begin(), str.end());
    if (str.length() < 3) {
        cout << "����������� ���" << endl;
        return 1;
    }
    switch (str[2]) {
        case '0':
            cout << "ʳ������ �������� ����: " << countZERO << endl;
            break;
        case '1':
            cout << "ʳ������ �������� �������: " << countONE << endl;
            break;
    }
    return 0;
}

void authorinfo(const char* file_name)
{
    fstream fileread (file_name);
    string buffer;
    string information = "� �������� ���� ���� �������� ��� �����:";
    string allInfo;
    int countChar;
    if(!fileread.is_open())
    {
        ofstream file(file_name);
        file.close();
        fstream fileread(file_name);
    }


    if (fileread.is_open())
    {
        while(getline(fileread, buffer))
        {
                        allInfo += buffer;
        }
        countChar = allInfo.length();
        for(int i = 0; i < countChar; i++)
        {
            if(isascii(buffer[i]))
                {
                    buffer[i] = '/';
                }
        }
        int countStudent = buffer.find("/�������/");
        int countModule = buffer.find("/������/");
        int countDev = buffer.find("/���������/");
        int countApp = buffer.find("/��������/");
        if (countStudent != -1) information += " �������";
        if (countModule != -1)
        {
            if (information.length() > 43)
            {
                information += ",";
            }
            information += " ������";
        }
        if (countDev != -1)
        {
            if (information.length() > 43)
            {
                information += ",";
            }
            information += " ���������";
        }
        if (countApp != -1)
        {
            if (information.length() > 43)
            {
                information += ",";
            }
            information += " ��������";
        }
        if (countStudent == -1 && countModule == -1 && countDev == -1 && countApp == -1)
        {
            information = "� �������� ���� �� ���� �������� ���: ��������, ������, �������, ���������";
        }
        information += ".";

        fileread.close();

        ofstream filewrite(file_name);

        filewrite << "ʳ������ ������� � ������ �����: " << countChar << "\n";
        filewrite << information << "\n";
        filewrite << "������ ���� ���������� ��������� ��������������������� ������������� �������� ���������� ������� �����������, �. �������������. ������. 2024 ��.";
        filewrite.close();
    }
}

void numbersinfo(const char* file_name)
{
    fstream fileread(file_name);
    string buffer;
    int numbers = 0;
    if (fileread.is_open())
    {
    getline(fileread,buffer);
    }
    for (int i = 0; i < buffer.length(); i++)
    {
    if (isdigit(buffer[i]))
        {
        numbers++;
        }
    }
    fileread.close();
    fstream filewrite(file_name, ios_base::app);
    filewrite << "\n" << "ʳ������ ����: " << numbers <<"\n";
    time_t seconds = time(NULL);
    tm *localeTime = localtime(&seconds);
    filewrite << localeTime->tm_hour << ":" << localeTime->tm_min << ":" << localeTime->tm_sec << "  ";
    filewrite << 1900 + localeTime->tm_year;
    filewrite.close();
}

void str_calculation(int x, int z, int b, const char* file_name)
{
    float res_calc = s_calculation(x, z);
    int bin = 0, k = 1;
    while (b)
    {
        bin += (b%2) * k;
        k *= 10;
        b/=2;

    }
    string b_in_bin = to_string(bin);

    fstream filewrite(file_name, ios_base::app);
    if (res_calc == -1)
    {
        filewrite << "\n" << "��������� ���������, �� ���������� ��������� x �� ���� ����� ��� ������� 5" << "\n";
    }
    else
    {
        filewrite << "\n" << "S: " << setprecision(1) << fixed << res_calc <<"\n";
    }
    filewrite << "� � �������: " << b_in_bin <<"\n";
    filewrite.close();
}


