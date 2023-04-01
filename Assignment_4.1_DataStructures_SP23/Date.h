#ifndef _DATE
#define _DATE

#include <iostream>

using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
public:
    Date();
    Date(int _month, int _day, int _year);
    Date(const Date& obj);
    ~Date();

    void setDate(int _month, int _day, int _year);
    void setMonth(int _month);
    void setDay(int _day);
    void setYear(int _year);

    int getMonth() const;
    int getDay() const;
    int getYear() const;
    Date getDate() const;

    friend ostream& operator<<(ostream& out, const Date& obj);
    friend istream& operator>>(istream& in, Date& obj);

    bool operator>(const Date& other) const;
    bool operator<(const Date& other) const;
   bool operator==(const Date& other) const;
    
    
};

#endif