#ifndef _ASSIGNMENT
#define _ASSIGNMENT

#include <iostream>
#include "Date.h"
using namespace std;

class Assignment
{
private:
    string description;
    Date dueDate;
public:
    Assignment();
    Assignment(string _description, Date _dueDate);
    Assignment(const Assignment& obj);
    ~Assignment();

    void setDescription(string _description);
    void setDate(Date _date);

    string getDescription() const;
    Date getDueDate() const;
    
    Assignment& operator=(const Assignment& other);
    bool operator>(const Assignment& other) const;
    bool operator<(const Assignment& other) const;
   bool operator==(const Assignment& other) const;


    friend ostream& operator<<(ostream& out, const Assignment& obj);
    friend istream& operator>>(istream& in, Assignment& obj);
};
#endif

