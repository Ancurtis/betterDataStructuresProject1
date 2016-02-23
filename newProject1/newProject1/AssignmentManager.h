// Data Structures Project 1
// Team 2: William Munshaw, Cooper Kertz, Amy Curtis
// 17 February 2016
// AssignmentManager.h

#pragma once
#include "Assignment.h"
#include "Header.h"
#include "Date.h"

class Assignment_Manager {
private:
	list<Assignment>assigned;
	list<Assignment>completed;
public:
	void addAssignment(Date assigned_date, Date due_date, Assignment_Status status, string description) // One of my delegated functions -- Cooper 
	{
		list<Assignment>::iterator itr = assigned.begin(); // iterator goes through, rejects any late assignments 
		while (itr != assigned.end())
		{
			Assignment assignment = *itr;
			if (assignment.getDueDate() < assigned_date || assignment.getDueDate == assigned_date)
			{
				cout << "Cannot add late assignments." << endl;
			}
			// need to add valid_date

			Assignment assignment(assigned_date, due_date, status, description);
			assigned.push_back(assignment);

		}
		
				
	}
	Assignment returnAssignment(Date assigned_date) 
	{
		list<Assignment>::iterator itr = assigned.begin();
		while (itr != assigned.end()) 
		{
			Assignment assignment = *itr;
			if (assignment.getAssignedDate() == assigned_date)
				return assignment;
		}
		throw exception("Could not find assignment.");
	}

	Assignment displayAssignments() //One of my delegated functions -- Cooper
	{
		list<Assignment>::iterator itr = assigned.begin();
		while (itr != assigned.end() || itr != completed.end())
		{
			
		}

	}
	int lateAssignmentCount() // One of my delegated functions -- Cooper
	{
		int lateCount;

		list<Assignment>::iterator itr = assigned.begin();
		while (itr != assigned.end())
		{
			Assignment assignment = *itr;
			if (assignment.getDueDate() < assignment.getAssignedDate || assignment.getDueDate == assignment.getAssignedDate)
			{
				lateCount++;
			}
			cout << "You have " << lateCount << " late assignments." << endl;
		}
	}
	void editAssignment(Date specifiedDate) // One of my delegated functions - William
	{
		//Declarations:
		list<Assignment>::iterator itr = assigned.begin();
		int userChoice;
		Date tempDate;
		bool wasFound = false;
		///////////////

		//need to add checks for if due date is invalid

		while (itr != assigned.end())
		{
			if (itr->getDueDate == specifiedDate)
			{
				cout << "Would you like to edit the due date (1) or the description (2)?" << endl;
				while (userChoice != 1 || userChoice != 2)
				{
					cin >> userChoice;
					switch (userChoice)
					{
					case 1:
						cout << "Enter new due date:" << endl;
						cin >> tempDate;
						itr->editDueDate(tempDate);
						break;
					case 2:
						itr->editDescription;
						cout << "Description edited!" << endl;
						break;
					default:
						cout << "Invalid option, try again" << endl;
						break;
					}
				}
				wasFound = true;
			}
			itr++;
		}
		if (wasFound = false)
		{
			cout << "Assignment is not in the list. Try again" << endl;
		}
	}
	void sortAssignments() // One of my delegated functions - William
	{
		//Declarations:
		list<Assignment>::iterator itr = assigned.begin();
		Date dueSoon = itr->getDueDate();
		///////////////

	}
	void completeAssignment()
	{

	}
};
//check out vector application,  phone directory