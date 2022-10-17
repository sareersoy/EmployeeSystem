//
// Created by saren on 24/11/2021.
//
#include <string>
#include <iostream>

#ifndef UNTITLED1_EMPLOYEECLASS_H
#define UNTITLED1_EMPLOYEECLASS_H

#include "Date.h"
using namespace std;
class EmployeeClass{
public:
    int EmployeeNumber;
    int EmployeeType;
    string Name;
    string Surname;
    string Title;
    float SalaryCoefficient;
    Date DateofBirth;
    Date DateofAppointment;
    int LengthofService;

    EmployeeClass(int employeeNumber, int employeeType, const string &name, const string &surname, const string &title,
                  float salaryCoefficient, const Date &dateofBirth, const Date &dateofAppointment, int lengthofService);

    EmployeeClass();


    int getEmployeeNumber() const;

    void setEmployeeNumber(int employeeNumber);

    int getEmployeeType() const;

    void setEmployeeType(int employeeType);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    const string &getTitle() const;

    void setTitle(const string &title);

    float getSalaryCoefficient() const;

    void setSalaryCoefficient(float salaryCoefficient);

    const Date &getDateofBirth() const;

    void setDateofBirth(const Date &dateofBirth);

    const Date &getDateofAppointment() const;

    void setDateofAppointment(const Date &dateofAppointment);

    int getLengthofService() const;

    void setLengthofService(int lengthofService);
};



#endif //UNTITLED1_EMPLOYEECLASS_H
