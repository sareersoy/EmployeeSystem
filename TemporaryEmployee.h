//
// Created by saren on 25/11/2021.
//

#ifndef UNTITLED1_TEMPORARYEMPLOYEE_H
#define UNTITLED1_TEMPORARYEMPLOYEE_H
#include "EmployeeClass.h"
#include <iostream>
using namespace std;
class TemporaryEmployee : public EmployeeClass{
public:


    TemporaryEmployee(int employeeNumber, int employeeType, const string &name, const string &surname,
                      const string &title, float salaryCoefficient, const Date &dateofBirth,
                      const Date &dateofAppointment, int lengthofService);

    TemporaryEmployee();
};


#endif //UNTITLED1_TEMPORARYEMPLOYEE_H
