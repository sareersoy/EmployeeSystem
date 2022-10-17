//
// Created by saren on 25/11/2021.
//
#include <iostream>
#include "TemporaryEmployee.h"
#include "EmployeeClass.h"
using namespace std;

TemporaryEmployee::TemporaryEmployee(int employeeNumber, int employeeType, const string &name, const string &surname,
                                     const string &title, float salaryCoefficient, const Date &dateofBirth,
                                     const Date &dateofAppointment, int lengthofService) : EmployeeClass(employeeNumber,
                                                                                                         employeeType,
                                                                                                         name, surname,
                                                                                                         title,
                                                                                                         salaryCoefficient,
                                                                                                         dateofBirth,
                                                                                                         dateofAppointment,
                                                                                                         lengthofService) {}

TemporaryEmployee::TemporaryEmployee() {}



