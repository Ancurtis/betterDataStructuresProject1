// Data Structures Project 1
// Team 2: William Munshaw, Cooper Kertz, Amy Curtis
// 17 February 2016
// AssignmentManager.h

#pragma once
#include "Assignment.h"
#include "Header.h"

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
			// what qualifies as an invalid date? needs to be rejected here also
			// also need to add which list im sending it to, assigned/completed

		Assignment assignment(assigned_date, due_date, status, description);
		assigned.push_back(assignment);
		
				
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
			if (assignment.getDueDate() < assigned_date || assignment.getDueDate == assigned_date)
			{
				lateCount++;
			}
			cout << "You have " << lateCount << " late assignments." << endl;
		}
	}
};
//check out vector application,  phone directory