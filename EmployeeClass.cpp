//
// Created by saren on 24/11/2021.
//

#include "EmployeeClass.h"
#include <iostream>
#include <utility>

using namespace std;


EmployeeClass::EmployeeClass(int employeeNumber, int employeeType, const string &name, const string &surname,
                             const string &title, float salaryCoefficient, const Date &dateofBirth,
                             const Date &dateofAppointment, int lengthofService) : EmployeeNumber(employeeNumber),
                                                                                   EmployeeType(employeeType),
                                                                                   Name(name), Surname(surname),
                                                                                   Title(title),
                                                                                   SalaryCoefficient(salaryCoefficient),
                                                                                   DateofBirth(dateofBirth),
                                                                                   DateofAppointment(dateofAppointment),
                                                                                   LengthofService(lengthofService) {}

int EmployeeClass::getEmployeeNumber() const {
    return EmployeeNumber;
}

void EmployeeClass::setEmployeeNumber(int employeeNumber) {
    EmployeeNumber = employeeNumber;
}

int EmployeeClass::getEmployeeType() const {
    return EmployeeType;
}

void EmployeeClass::setEmployeeType(int employeeType) {
    EmployeeType = employeeType;
}

const string &EmployeeClass::getName() const {
    return Name;
}

void EmployeeClass::setName(const string &name) {
    Name = name;
}

const string &EmployeeClass::getSurname() const {
    return Surname;
}

void EmployeeClass::setSurname(const string &surname) {
    Surname = surname;
}

const string &EmployeeClass::getTitle() const {
    return Title;
}

void EmployeeClass::setTitle(const string &title) {
    Title = title;
}

float EmployeeClass::getSalaryCoefficient() const {
    return SalaryCoefficient;
}

void EmployeeClass::setSalaryCoefficient(float salaryCoefficient) {
    SalaryCoefficient = salaryCoefficient;
}

const Date &EmployeeClass::getDateofBirth() const {
    return DateofBirth;
}

void EmployeeClass::setDateofBirth(const Date &dateofBirth) {
    DateofBirth = dateofBirth;
}

const Date &EmployeeClass::getDateofAppointment() const {
    return DateofAppointment;
}

void EmployeeClass::setDateofAppointment(const Date &dateofAppointment) {
    DateofAppointment = dateofAppointment;
}

int EmployeeClass::getLengthofService() const {
    return LengthofService;
}

void EmployeeClass::setLengthofService(int lengthofService) {
    LengthofService = lengthofService;
}

EmployeeClass::EmployeeClass() {}
