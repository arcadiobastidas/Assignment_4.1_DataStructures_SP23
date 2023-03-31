#ifndef ASSIGNMENT_LIST
#define ASSIGNMENT_LIST

#include "LinkedBag.cpp"
#include "Assignment.h"

using namespace std;

class AssignmentList {
private:
    LinkedBag<Assignment> myAssig;

public:
    AssignmentList();
    AssignmentList(const AssignmentList& other);
    ~AssignmentList();

    LinkedBag<Assignment> getAssignments() const;
    bool addAssignment(const Assignment& assignment);
    bool removeAssignment(const Assignment& assignment);
    void displayAssignments() const;
    Assignment getEarliestAssignment(const AssignmentList & obj) const;

    AssignmentList& operator=(const AssignmentList& other);

    friend ostream& operator<<(ostream& out, const AssignmentList& obj)
    {
       return out;
    }
    friend istream& operator>>(istream& in, AssignmentList& obj)
    {
        return in;
    }
};

#endif // ASSIGNMENT_LIST
