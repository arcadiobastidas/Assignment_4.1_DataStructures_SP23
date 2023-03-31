#include "AssignmentList.h"
#include <vector>
#include <iostream>
#include <algorithm>

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
        for (const Assignment& assignment : assignments) {
            cout << "- " << assignment.getDescription() << " due on " << assignment.getDueDate() << endl;
        }
    }
}

Assignment AssignmentList::getEarliestAssignment(const AssignmentList& obj) const
{
    vector<Assignment> temp;
    Assignment earliestAssignment;
    

    for(int i = 0; i < obj.myAssig.getCurrentSize(); i++)
    {
        temp.push_back(obj.myAssig.getElement(i));
    }

    for (int i = 0; i < temp.size() - 1; i++) {
        for (int j = 0; j < temp.size() - i - 1; j++) {
            if (temp[j].getDueDate() > temp[j + 1].getDueDate()) {
                swap(temp[j], temp[j + 1]);
            }
        }
    }
   
   earliestAssignment = temp[0];
    return earliestAssignment;

        
}




AssignmentList& AssignmentList::operator=(const AssignmentList& other) {
    if (this != &other) {
        myAssig = other.myAssig;
    }
    return *this;
}
