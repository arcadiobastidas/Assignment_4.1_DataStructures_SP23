#include "Date.h"

Date::Date()
{
    month = 0;
    day = 0;
    year = 0;
}

Date::Date(int _month, int _day, int _year)
{
    if (_month> 0 && _day> 0 && _year > 0)
    {
        this->month = _month;
        this->day = _day;
        this->year = _year;
    }
}

Date::Date(const Date& obj)
{
    this->day = obj.getDay();
    this->month = obj.getMonth();
    this->year = obj.getYear();
}

Date::~Date()
{
}

void Date::setDate(int _month, int _day, int _year)
{
    if (_month> 0 && _day> 0 && _year > 0)
    {
        this->month = _month;
        this->day = _day;
        this->year = _year;
    }
}

void Date::setMonth(int _month)
{
    if(_month>0)
    {
        this->month = _month;
    }
}

void Date::setDay(int _day)
{
    if(_day > 0)
    {
        this->day = _day;
    }
}

void Date::setYear(int _year)
{
    if(_year > 0)
    {
        this->year = _year;
    }
        
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

Date Date::getDate() const
{
    
    return *this;
}

ostream& operator<<(ostream& out, const Date& obj)
{
    out << obj.getMonth() << "/" << obj.getDay() << "/" << obj.getYear();
    return out;
}

istream& operator>>(istream& in, Date& obj)
{
    int month, day, year;
    cout << "Enter Month: ";
    in >> month;
    cout << "Enter Day: ";
    in >> day;
    cout << "Enter Year: ";
    in >> year;

    obj.setDate(month,day,year);

    return in;
    
}


bool Date::operator==(const Date& other) const {
    return getDate() == other.getDate();
}

//overload operator >, <, and ==
bool Date::operator>(const Date& other) const
{
    if (this->year > other.year)
    {
        return true;
    }
    else if (this->year == other.year)
    {
        if (this->month > other.month)
        {
            return true;
        }
        else if (this->month == other.month)
        {
            if (this->day > other.day)
            {
                return true;
            }
        }
    }
    return false;
}

bool Date::operator<(const Date& other) const
{
    if (this->year < other.year)
    {
        return true;
    }
    else if (this->year == other.year)
    {
        if (this->month < other.month)
        {
            return true;
        }
        else if (this->month == other.month)
        {
            if (this->day < other.day)
            {
                return true;
            }
        }
    }
    return false;
}
