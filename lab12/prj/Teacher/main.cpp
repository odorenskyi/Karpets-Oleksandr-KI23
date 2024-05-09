#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>


#include "ModulesKarpets.h"

using namespace std;

int main()
{
    try {
    string filePath = __FILE__;
    string allPath = filePath;

    allPath.resize(allPath.length() - 20);

    string resFile = "\TestSuite\\TestResults.txt";
    string testFile = "\TestSuite\\TestSuiteFile.txt";

    int checking = filePath.find("\\lab12\\prj");
    if (checking == -1) {
            for (int i = 0; i < 100; i++) Beep(675, 100);
            ofstream file;
            file.open(allPath + resFile);
            file << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
            file.close();
    }
    else {
        ifstream file;
        file.open(allPath + testFile);
        if (!file.is_open()) throw (string)"Файл для тестування не знайдено...";
        string line;
        int testNum = 1;
        while (!file.eof()) {
            getline(file, line);
            char status = line[line.length() - 1];

            int countLen = line.length() - 4;
            line.resize(countLen);

            float len = stof(line);

            ClassLab12_Karpets *buffer = new ClassLab12_Karpets(len);
            if (status == 'y') buffer->setRipn();
            ofstream res;
            res.open(allPath + resFile, ios_base::app);
            res << "Тест № " << testNum << "\nДовжина грані кавуна: " << buffer->getLen() << "\nОб'єм кавуна: " << buffer->getVol() <<  "\nСтиглість кавуна: " << buffer->getRipn() << "\n\n\n";
            res.close();
            testNum++;
            delete buffer;
        }
        file.close();
    }
    return 0;
    }
    catch(string errorString) { cout << errorString << endl; }
}
