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

    vector<Assignment> getOrderedAssignments() const;
    vector<Assignment> getEarliestAssignments() const;

    AssignmentList& operator=(const AssignmentList& other);
};

#endif // ASSIGNMENT_LIST
