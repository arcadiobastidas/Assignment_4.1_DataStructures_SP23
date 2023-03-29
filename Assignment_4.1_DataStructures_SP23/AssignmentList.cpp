#include "AssignmentList.h"
#include <vector>
#include <iostream>

AssignmentList::AssignmentList() {}

AssignmentList::AssignmentList(const AssignmentList& other) {
    myAssig = other.myAssig;
}

AssignmentList::~AssignmentList() {}

LinkedBag<Assignment> AssignmentList::getAssignments() const {
    return myAssig;
}

bool AssignmentList::addAssignment(const Assignment& assignment) {
    return myAssig.add(assignment);
}

bool AssignmentList::removeAssignment(const Assignment& assignment) {
    return myAssig.remove(assignment);
}

void AssignmentList::displayAssignments() const {
    vector<Assignment> assignments = myAssig.toVector();
    if (assignments.empty()) {
        cout << "No assignments in list." << endl;
    } else {
        cout << "Assignments:" << endl;
        for (const auto& assignment : assignments) {
            cout << "- " << assignment.getDescription() << " due on " << assignment.getDueDate() << endl;
        }
    }
}

vector<Assignment> AssignmentList::getOrderedAssignments() const {
    vector<Assignment> assignments = myAssig.toVector();
    int n = assignments.size();
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n-1; i++) {
            if (assignments[i].getDueDate() > assignments[i+1].getDueDate()) {
                swap(assignments[i], assignments[i+1]);
                swapped = true;
            }
        }
        n--;
    } while (swapped);
    return assignments;
}

vector<Assignment> AssignmentList::getEarliestAssignments() const {
    vector<Assignment> assignments = myAssig.toVector();
    int n = assignments.size();
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n-1; i++) {
            if (assignments[i].getDueDate() > assignments[i+1].getDueDate()) {
                swap(assignments[i], assignments[i+1]);
                swapped = true;
            }
        }
        n--;
    } while (swapped);
    vector<Assignment> earliestAssignments;
    if (!assignments.empty()) {
        earliestAssignments.push_back(assignments[0]);
        for (int i = 1; i < assignments.size(); i++) {
            if (assignments[i].getDueDate()== earliestAssignments[0].getDueDate()) {
                earliestAssignments.push_back(assignments[i]);
            } else {
                break;
            }
        }
    }
    return earliestAssignments;
}

AssignmentList& AssignmentList::operator=(const AssignmentList& other) {
    if (this != &other) {
        myAssig = other.myAssig;
    }
    return *this;
}
