#include "Assignment.h"

Assignment::Assignment()
{
    description = "";
    dueDate.setDate(1,1,1);
}

Assignment::Assignment(string _description, Date _dueDate)
{
    this->description = _description;
    this->dueDate = _dueDate;
}

Assignment::Assignment(const Assignment& obj)
{
    this->description = obj.description;
    this->dueDate = obj.dueDate;
}

Assignment::~Assignment()
{
}

void Assignment::setDescription(string _description)
{
    this->description = _description;
}

void Assignment::setDate(Date _dueDate)
{
    this->dueDate = _dueDate;
}

string Assignment::getDescription() const
{
    return description;
}

Date Assignment::getDueDate() const
{
    return dueDate;
}

ostream& operator<<(ostream& out, const Assignment& obj)
{
    out << "Description: " << obj.description << endl;
    out << "Due Date: " << obj.dueDate;
    return out;
}

istream& operator>>(istream& in, Assignment& obj)
{
    cout << "Enter description: ";
    in >> obj.description;
    cout << "Enter due date (mm/dd/yyyy): ";
    in >> obj.dueDate;
    return in;
}

Assignment& Assignment::operator=(const Assignment& other) {
    if (this != &other) {
        description = other.description;
        dueDate = other.dueDate;
       
    }
    return *this;
}


bool Assignment::operator>(const Assignment& other) const {
    return dueDate > other.dueDate;
}

bool Assignment::operator<(const Assignment& other) const
{
    return  dueDate < other.dueDate;
}

 bool Assignment::operator==(const Assignment& other) const {
  return this->getDescription() == other.getDescription();
}


