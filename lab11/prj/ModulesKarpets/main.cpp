#include "Karpets_h.h"

using namespace std;


void loadDataBase(vector<Employee> &database, string filename) {
    try {
    ofstream binCreate(filename, ios::app);
    binCreate.close();
    ifstream bin (filename, ios::binary);
    if (!bin.is_open()) throw (string)"���� �� ��������...";
    int lenOfFile = int(bin.seekg(0, ios::end).tellg());
    bin.seekg(0, ios::beg);
    while (bin.tellg() < lenOfFile) {
        Employee* tmpEmployee = new Employee;

        int lenOfType;
        bin.read((char*)&*tmpEmployee, sizeof(date));

        bin.read((char*)&tmpEmployee->regNum, sizeof(int));
        bin.read((char*)&tmpEmployee->ID, sizeof(int));

        bin.read((char*)&tmpEmployee->gender, sizeof(char));
        bin.read((char*)&tmpEmployee->typeOfWork, sizeof(char));

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->fullName.resize(lenOfType);
        bin.read((char*)&tmpEmployee->fullName[0], lenOfType);

        bin.read((char*)&tmpEmployee->birthday, sizeof(date));

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->citizenship.resize(lenOfType);
        bin.read((char*)&tmpEmployee->citizenship[0], lenOfType);

        char numOfEd = 0;
        bin.read((char*)&numOfEd, sizeof(char));

        for (int i = 0; i < numOfEd; i++)
        {
            bin.read((char*)&tmpEmployee->education[i], sizeof(int));

            bin.read((char*)&lenOfType, sizeof(int));
            tmpEmployee->placeOfEducation[i].resize(lenOfType);
            bin.read((char*)&tmpEmployee->placeOfEducation[i][0], lenOfType);
        }

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->lastJobPlace.resize(lenOfType);
        bin.read((char*)&tmpEmployee->lastJobPlace[0], lenOfType);

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->lastJob.resize(lenOfType);
        bin.read((char*)&tmpEmployee->lastJob[0], lenOfType);

        bin.read((char*)&tmpEmployee->workExp, sizeof(short)*3);

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->placeOfLiving.resize(lenOfType);
        bin.read((char*)&tmpEmployee->placeOfLiving[0], lenOfType);

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->passportInfo.resize(lenOfType);
        bin.read((char*)&tmpEmployee->passportInfo[0], lenOfType);

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->additionalInfo.resize(lenOfType);
        bin.read((char*)&tmpEmployee->additionalInfo[0], lenOfType);

        bin.read((char*)&tmpEmployee->dateOfDissial, sizeof(date));

        bin.read((char*)&lenOfType, sizeof(int));
        tmpEmployee->reasonForDissial.resize(lenOfType);
        bin.read((char*)&tmpEmployee->reasonForDissial[0], lenOfType);

        database.push_back(*tmpEmployee);
        delete tmpEmployee;
        }
        bin.close();
    }
    catch(string errorString) { cout << errorString << endl; }
}

void getDataBase(vector<Employee> &database){
    ofstream fout;
    #define OUT(option) ((option) == 'c' ? cout : fout)

    char option;
    do {
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl
             << " �� ������ ������� ���� ����� �� ������� (c) ��� � ���� (f) - ";
        cin >> option;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    } while (option != 'c' && option != 't' && option != 'f' && option != 'F' && option != '�' && option != '�');
    do {
        string filename = "";
        if (option == 'f' || option == 'F' || option == '�' || option == '�') {
            cout << " ������ ����� �����: ";
            cin >> filename;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            fout.open(filename, ios::out);
        }
        if (option == 'c' || fout.is_open()) {
            OUT(option) << "+" << setfill('�') << setw(79) << "+" << endl << setfill(' ')
                        << "|" << setw(63) << "²�Ĳ� ���в�: ������� ������ ���ֲ�����, �. �-2" << setw(16) << "|" << endl
                        << "+" << setfill('�') << setw(79) << "+" << endl << setfill(' ');
            for (int i = 0; i < database.size(); i++) {
                OUT(option) << "|" << setw(6) << i+1 << "|" << setw(25) << left << "���� ���������:" << "|" << setw(45)
                                   << (database[i].creationDate.day < 10 ? "0" : "") + to_string(database[i].creationDate.day) + "." +
                                      (database[i].creationDate.month < 10 ? "0" : "") + to_string(database[i].creationDate.month) + "." +
                                      to_string(database[i].creationDate.year) << "|" << endl << resetiosflags(ios::left);
                int edc = 0;
                for (int j = 0; j < 17; j++) {
                    OUT(option) << "|" << setw(7) << "|" << setw(25) << left;
                    switch(j) {
                    case 0:
                        OUT(option) << "������������ �����:" << "|" << setw(45) << database[i].regNum;
                        break;
                    case 1:
                        OUT(option) << "���������������� �����:" << "|" << setw(45) << database[i].ID;
                        break;
                    case 2:
                        OUT(option) << "�����:" << "|" << setw(45) << (database[i].gender == 'm' ? "�������" : "�����");
                        break;
                    case 3:
                        OUT(option) << "��� ������:" << "|" << setw(45) << (database[i].typeOfWork == 'f' ? "�������" : "�� �����������");
                        break;
                    case 4:
                        OUT(option) << "ϲ� ����������:" << "|" << setw(45) << database[i].fullName;
                        break;
                    case 5:
                        OUT(option) << "���� ����������:" << "|" << setw(45) << (database[i].birthday.day < 10 ? "0" : "") +
                                        to_string(database[i].birthday.day) + "." + (database[i].birthday.month < 10 ? "0" : "") +
                                        to_string(database[i].birthday.month) + "." + to_string(database[i].birthday.year);
                        break;
                    case 6:
                        OUT(option) << "������������:" << "|" << setw(45) << database[i].citizenship;
                        break;
                    case 7:
                        OUT(option) << "����� " + to_string(edc+1) + ":" << "|" << setw(45) << (database[i].placeOfEducation[edc] == "" ? "-" :
                                                                  (database[i].education[edc] == Employee::basicSecondary ? "������ �������" :
                                                                   database[i].education[edc] == Employee::compSecondary ? "����� �������" :
                                                                   database[i].education[edc] == Employee::vocational ? "���������-�������" :
                                                                   database[i].education[edc] == Employee::incompHigher ? "������� ����" :
                                                                   database[i].education[edc] == Employee::basicHigher ? "������ ����" : "����"));
                        break;
                    case 8:
                        OUT(option) << " " << "|" << setw(45) << database[i].placeOfEducation[edc];
                        if (database[i].placeOfEducation[++edc] != "") {
                            j -= 2;     // repeat writing educations` info
                        }
                        break;
                    case 9:
                        OUT(option) << "������ ���� ������:" << "|" << setw(45)
                                    << (database[i].lastJobPlace == "" ? "-" : database[i].lastJobPlace);
                        break;
                    case 10:
                        OUT(option) << resetiosflags(ios::left) << "������:    " << left << "|" << setw(45)
                                    << (database[i].lastJob == "" ? "-" : database[i].lastJob);
                        break;
                    case 11:
                        OUT(option) << "���� ������:" << "|" << setw(45) << (database[i].workExp.days != 0 &&
                                        database[i].workExp.months != 0 && database[i].workExp.years != 0 ?
                                        (database[i].workExp.days != 0 ? to_string(database[i].workExp.days) + " ��� " : "") +
                                        (database[i].workExp.months != 0 ? to_string(database[i].workExp.months) + " ������ " : "") +
                                        (database[i].workExp.years != 0 ? to_string(database[i].workExp.years) + " ����" : "") : "-");
                        break;
                    case 12:
                        OUT(option) << "̳��� ����������:" << "|" << setw(45) << database[i].placeOfLiving;
                        break;
                    case 13:
                        OUT(option) << "�������� ���:" << "|" << setw(45) << database[i].passportInfo;
                        break;
                    case 14:
                        OUT(option) << "�������� �������:" << "|" << setw(45)
                                    << (database[i].additionalInfo == "" ? "-" : database[i].additionalInfo);
                        break;
                    case 15:
                        OUT(option) << "���� ���������:" << "|" << setw(45) << (database[i].dateOfDissial.day != 0 &&
                                        database[i].dateOfDissial.month != 0 && database[i].dateOfDissial.year != 0 ?
                                        (database[i].dateOfDissial.day < 10 ? "0" : "") + to_string(database[i].dateOfDissial.day) + "." +
                                        (database[i].dateOfDissial.month < 10 ? "0" : "") + to_string(database[i].dateOfDissial.month) +
                                        "." + to_string(database[i].dateOfDissial.year) : "-");
                        break;
                    case 16:
                        OUT(option) << resetiosflags(ios::left) << "�������:         " << left << "|" << setw(45)
                                    << (database[i].reasonForDissial == "" ? "-" : database[i].reasonForDissial);
                        break;
                    }
                    OUT(option) << "|" << endl << resetiosflags(ios::left);
                }
                if (i+1 != database.size())
                    OUT(option) << "+" << setfill('�') << setw(7) << "+" << setw(26) << "+" << setw(46) << "+" << setfill(' ') << endl;
                else
                    OUT(option) << "+" << setfill('�') << setw(79) << "+" << endl << setfill(' ');
            }
            if (fout.is_open()) fout.close();
            break;
        }
        else {
            cerr << "������� ������� �� ��� ��������� " << filename << ". ��������� �� ���." << endl;
        }
    } while (true);

    #undef OUT(option)
}
