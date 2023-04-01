#include "AssignmentList.h"
#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
   //todo: create a menu of options for the user to choose from
   
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
myList.removeAssignment(my_assignment);

cout << myList;
 

   return 0;
}  // end main

