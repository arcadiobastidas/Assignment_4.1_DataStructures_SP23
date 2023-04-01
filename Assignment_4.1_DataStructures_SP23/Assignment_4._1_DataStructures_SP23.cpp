#include "AssignmentList.h"
#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
   Assignment my_assignment("DataStructures-101",Date(5,13,2023));
   Assignment my_assignment2("Physics-101",Date(5,12,2023));
   Assignment my_assignment3("Math-103",Date(5,15,2023));
   AssignmentList myList;
   AssignmentList earliest;
   

   myList.addAssignment(my_assignment);
   myList.addAssignment(my_assignment2);
   myList.addAssignment(my_assignment3);
 
   cout << myList;

   


cout <<myList.getEarliestAssignments();
cout <<myList.getAssignmentInOrderAdded();

 

   return 0;
}  // end main

