#include "AssignmentList.h"
#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
   AssignmentList myList; //create an empty list
   Assignment my_assignment("DataStructures-101",Date(5,13,2023));
   Assignment my_assignment2("Physics-101",Date(5,12,2023));
   Assignment my_assignment3("Math-103",Date(5,15,2023));
   int choice;
   
   cout << "Welcome to the Assignment List Program" << endl;
   cout << "-------------------------------------" << endl;
   do
   {
      cout << "1. Add an assignment" << endl;
      cout << "2. Remove an assignment" << endl;
      cout << "3. Get earliest assignment" << endl;
      cout << "4. Get assignment in order added" << endl;
      cout << "5. Print all assignments" << endl;
      cout << "6. Exit" << endl;
      cout << "-------------------------------------" << endl;

      cout << "Enter your choice: ";
      cin >> choice;

      switch (choice)
      {
      case 1:
         //add an assignment
         cout << "Adding assignments: DataStructures-101, Physics-101, Math-103" << endl;
         myList.addAssignment(my_assignment);
         myList.addAssignment(my_assignment2);
         myList.addAssignment(my_assignment3);
         cout << "Printing all assignments: " << endl;
         cout << myList;
         cout << endl;
         break;
      case 2:
         //remove an assignment
         cout << "Removing assignment: DataStructures-101" << endl;
         myList.removeAssignment(my_assignment);
         cout << "Printing all assignments without removed assignment: " << endl;
         cout << myList;
         cout << endl;
         break;
      case 3:
         //get earliest assignment
         cout << "Printing earliest assignment: " << endl;
         cout << myList.getEarliestAssignments();
         cout << endl;
         break;
      case 4:
         //get assignment in order added
         cout << "Printing assignment in order added: " << endl;
         cout << myList.getAssignmentInOrderAdded();
         cout << endl;
         break;
      case 5:
         //print all assignments
         cout << "Printing all assignments: " << endl;
         cout << myList;
         cout << endl;
         break;
      case  6:
         cout << "Thank you for using the Assignment List Program" << endl;
         exit(0);
         break;
      default:
         cout << "Invalid choice. Please try again." << endl;
      }
   }while(choice<=6);

    
   return 0;
};  // end main

