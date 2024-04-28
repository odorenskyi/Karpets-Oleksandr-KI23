#include "chepil_h.h"

using namespace std;

void getAccount(Employee account, int index) {
    try {
    cout << "||" << setw(6) << index+1 << "||" << setw(25) << left << "���� ��������� ������:" << "||" << setw(38)
                 << (account.creationDate.day < 10 ? "0" : "") + to_string(account.creationDate.day) + "." +
                    (account.creationDate.month < 10 ? "0" : "") + to_string(account.creationDate.month) + "." +
                    to_string(account.creationDate.year) << "||" << endl << resetiosflags(ios::left);
    int edc = 0;
    for(int k = 0; k < 17; k++){
        cout << "||" << setw(7) << "||" << setw(25) << left;
        switch(k) {
        case 0:
            cout << "������������ �����:" << "||" << setw(45) << account.regNum;
            break;
        case 1:
            cout << "���������������� ����� (ID):" << "||" << setw(43) << account.ID;
            break;
        case 2:
            cout << "�����:" << "||" << setw(45) << (account.gender == 'm' ? "�������" : "�����");
            break;
        case 3:
            cout << "��� ������:" << "||" << setw(45) << (account.typeOfWork == 'f' ? "�������" : "�� ����������� ");
            break;
        case 4:
            cout << "�.�.�. ����������:" << "||" << setw(45) << account.fullName;
            break;
        case 5:
            cout << "���� ����������:" << "||" << setw(45) << (account.birthday.day < 10 ? "0" : "") +
            to_string(account.birthday.day) + "." + (account.birthday.month < 10 ? "0" : "") +
            to_string(account.birthday.month) + "." + to_string(account.birthday.year);
            break;
        case 6:
            cout << "������������:" << "||" << setw(45) << account.citizenship;
            break;
        case 7:
            cout << "����� " + to_string(edc+1) + ":" << "||" << setw(45) << (account.placeOfEducation[edc] == "" ? "-" :
                                                    (account.education[edc] == Employee::basicSecondary ? "������ �������" :
                                                    account.education[edc] == Employee::compSecondary ? "����� �������" :
                                                    account.education[edc] == Employee::vocational ? "���������-�������" :
                                                    account.education[edc] == Employee::incompHigher ? "������� ����" :
                                                    account.education[edc] == Employee::basicHigher ? "������ ����" : "����"));
            break;
        case 8:
            cout << " " << "||" << setw(45) << account.placeOfEducation[edc];
            for(int j = 0; j < 4; j++){
                if (account.placeOfEducation[++edc] != "") {
                    j -= 2;
                }
            }
            break;
        case 9:
            cout << "������ ���� ������:" << "||" << setw(45)
                 << (account.lastJobPlace == "" ? "-" : account.lastJobPlace);
            break;
        case 10:
            cout << resetiosflags(ios::left) << "������:    " << left << "||" << setw(45)
                 << (account.lastJob == "" ? "-" : account.lastJob);
            break;
        case 11:
            cout << "���� ������:" << "||" << setw(45) << (account.workExp.days != 0 ?
            to_string(account.workExp.days) + " ��� " : "") + (account.workExp.months != 0 ?
            to_string(account.workExp.months) + " ������ " : "") + (account.workExp.years != 0 ?
            to_string(account.workExp.years) + " ����" : "");
            break;
        case 12:
            cout << "̳��� ����������:" << "||" << setw(45) << account.placeOfLiving;
            break;
        case 13:
            cout << "�������� ���:" << "||" << setw(45) << account.passportInfo;
            break;
        case 14:
            cout << "�������� �������:" << "||" << setw(45)
                << (account.additionalInfo == "" ? "-" : account.additionalInfo);
            break;
        case 15:
            cout << "���� ���������:" << "||" << setw(45) << (account.dateOfDissial.day != 0 &&
                         account.dateOfDissial.month != 0 && account.dateOfDissial.year != 0 ?
                        (account.dateOfDissial.day < 10 ? "0" : "") + to_string(account.dateOfDissial.day) + "." +
                        (account.dateOfDissial.month < 10 ? "0" : "") + to_string(account.dateOfDissial.month) +
                         "." + to_string(account.dateOfDissial.year) : "-");
            break;
        case 16:
            cout << resetiosflags(ios::left) << "�������:         " << left << "||" << setw(45)
                 << (account.reasonForDissial  == "" ? "-" : account.reasonForDissial);
            break;
        }
        cout << "||" << endl << resetiosflags(ios::left);
        }
    }
    catch (string errorString) { cout << errorString << endl; }
}

void deleteFromDataBase(vector<Employee> &database, int ID){
    auto iter = database.cbegin();
    for(int i = 0; i < database.size(); i++){
        if(database[i].ID == ID){
            database.erase(iter + i);
            cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << setw(20) << "" << "+            ����� ��������             +" << endl;
            cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl << endl;
            return;
        }
    }

    cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << setw(20) << "" << "+           ����� �� ��������           +" << endl;
    cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl << endl;
}
