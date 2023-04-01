#include "AssignmentList.h"
#include <vector>
#include <iostream>

AssignmentList::AssignmentList() {}

AssignmentList::AssignmentList(const AssignmentList& other) {
    myAssig = other.myAssig;
}

//create destructor
AssignmentList::~AssignmentList() {
    myAssig.clear();
}

LinkedBag<Assignment> AssignmentList::getAssignments() const {
    return myAssig;
}

bool AssignmentList::addAssignment(const Assignment& assignment) {
    return myAssig.add(assignment);
}

bool AssignmentList::removeAssignment(const Assignment& assignment) {
    return myAssig.remove(assignment);
}


AssignmentList AssignmentList::getEarliestAssignments() const {
    AssignmentList earliestAssignments;
    vector<Assignment> assignments = myAssig.toVector();
    if (assignments.empty()) {
        cout << "No assignments in list." << endl;
    }
    else {
        Assignment earliestAssignment = assignments[0];
        for (const Assignment& assignment : assignments) {
            if (assignment.getDueDate() < earliestAssignment.getDueDate()) {
                earliestAssignment = assignment;
            }
        }
        earliestAssignments.addAssignment(earliestAssignment);
    }
    return earliestAssignments;
}

//create a method to print the assignment in the order added
AssignmentList AssignmentList::getAssignmentInOrderAdded() const {
    AssignmentList assignmentInOrderAdded;
    vector<Assignment> assignments = myAssig.toVector();
    if (assignments.empty()) {
        cout << "No assignments in list." << endl;
    }
    else {
        for (const Assignment& assignment : assignments) {
            assignmentInOrderAdded.addAssignment(assignment);
        }
    }
    return assignmentInOrderAdded;
}

AssignmentList& AssignmentList::operator=(const AssignmentList& other) {
    if (this != &other) {
        myAssig = other.myAssig;
    }
    return *this;
}


AssignmentList& AssignmentList::operator==(const AssignmentList& other) {
    if (this != &other) {
        myAssig = other.myAssig;
    }
    return *this;
}


