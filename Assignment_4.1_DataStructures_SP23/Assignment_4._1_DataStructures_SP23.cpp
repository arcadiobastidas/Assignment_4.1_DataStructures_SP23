#include "AssignmentList.h"
#include <iostream>



using namespace std;


int main()
{
   Assignment my_assignment("puta",Date(1,1,1));
   AssignmentList myList;

   myList.addAssignment(my_assignment);

   myList.displayAssignments();


 

   return 0;
}  // end main

