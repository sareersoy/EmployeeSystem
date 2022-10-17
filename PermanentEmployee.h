//
// Created by saren on 25/11/2021.
//
#include "EmployeeClass.h"
#ifndef UNTITLED1_PERMANENTEMPLOYEE_H
#define UNTITLED1_PERMANENTEMPLOYEE_H
#include <iostream>
using namespace std;

class PermanentEmployee : public EmployeeClass{
public:
    PermanentEmployee(int employeeNumber, int employeeType, const string &name, const string &surname,
                      const string &title, float salaryCoefficient, const Date &dateofBirth,
                      const Date &dateofAppointment, int lengthofService);
};


#endif //UNTITLED1_PERMANENTEMPLOYEE_H
