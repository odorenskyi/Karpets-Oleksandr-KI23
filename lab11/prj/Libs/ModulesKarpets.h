#ifndef KARPETS_H_H_INCLUDED
#define KARPETS_H_H_INCLUDED

#include <vector>
#include <iomanip>
#include <fstream>
#include <string>

#include "struct_type_project_2.h"

void loadDataBase(vector<Employee> &database, string filename);
void getDataBase(vector<Employee> &database);

#endif // KARPETS_H_H_INCLUDED
