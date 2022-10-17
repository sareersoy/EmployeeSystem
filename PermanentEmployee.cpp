//
// Created by saren on 25/11/2021.
//

#include "PermanentEmployee.h"
#include "EmployeeClass.h"
#include <iostream>
using namespace std;


PermanentEmployee::PermanentEmployee(int employeeNumber, int employeeType, const string &name, const string &surname,
                                     const string &title, float salaryCoefficient, const Date &dateofBirth,
                                     const Date &dateofAppointment, int lengthofService) : EmployeeClass(employeeNumber,
                                                                                                         employeeType,
                                                                                                         name, surname,
                                                                                                         title,
                                                                                                         salaryCoefficient,
                                                                                                         dateofBirth,
                                                                                                         dateofAppointment,
                                                                                                         lengthofService) {}
