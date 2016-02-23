// Data Structures Project 1
// Team 2: William Munshaw, Cooper Kertz, Amy Curtis
// 17 February 2016
// Assignment.h

#include "Header.h"
#include "Date.h"
using namespace std;
enum Assignment_Status{LATE,COMPLETED,ASSIGNED};
class Assignment {

private:
	Date assigned_date;
	Date due_date;
	Assignment_Status status;
	string description;
	bool isLate;
public:
	Assignment(Date assigned_date, Date due_date, Assignment_Status status, string description) { //Kuhail said ok to define here, instead of leaving prototype
		this->assigned_date = assigned_date;
		this->due_date = due_date;
		this->status = status;
		this->description = description;
		isLate = false;
	}
	Date getAssignedDate()
	{
		return assigned_date;
	}
	Date getDueDate()
	{
		return due_date;
	}
	void editDescription()
	{
		cout << "Enter new description for the assignment" << endl;
		cin >> description;
	}
	void editDueDate(Date dueDate)
	{
		due_date = dueDate;
	}
};