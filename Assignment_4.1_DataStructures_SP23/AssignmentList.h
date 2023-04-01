#ifndef ASSIGNMENT_LIST
#define ASSIGNMENT_LIST

#include "LinkedBag.cpp"
#include "Assignment.h"

using namespace std;

class AssignmentList {
private:
    LinkedBag<Assignment> myAssig;

public:
    //constructors and destructors
    AssignmentList();
    AssignmentList(const AssignmentList& other);
    ~AssignmentList();

    //getters and setters
    LinkedBag<Assignment> getAssignments() const;
    bool addAssignment(const Assignment& assignment);
    bool removeAssignment(const Assignment& assignment);

    AssignmentList getEarliestAssignments() const;
    AssignmentList getAssignmentInOrderAdded() const;
    //operators overloading
    AssignmentList& operator==(const AssignmentList& other);

    AssignmentList& operator=(const AssignmentList& other);

    friend ostream& operator<<(ostream& out, const AssignmentList& obj)
    {
        vector<Assignment> assignments = obj.myAssig.toVector();
        if (assignments.empty()) {
            out << "No assignments in list." << endl;
        }
        else {
            out << "Assignments:" << endl;
            for (const auto& assignment : assignments) {
                out << "- " << assignment.getDescription() << " due on " << assignment.getDueDate() << endl;
            }
        }
        return out;

    }

    friend istream& operator>>(istream& in, AssignmentList& obj)
    {
        Assignment assignment;
        in >> assignment;
        obj.addAssignment(assignment);
        return in;
    }
};

#endif // ASSIGNMENT_LIST
