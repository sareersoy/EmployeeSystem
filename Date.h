//
// Created by saren on 24/11/2021.
//

#ifndef UNTITLED1_DATE_H
#define UNTITLED1_DATE_H


class Date {


private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);

    Date();

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

};


#endif //UNTITLED1_DATE_H
