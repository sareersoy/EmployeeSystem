//
// Created by saren on 24/11/2021.
//
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {


}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

Date::Date() {}
