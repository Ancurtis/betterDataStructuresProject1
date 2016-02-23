// Data Structures Project 1
// Team 2: William Munshaw, Cooper Kertz, Amy Curtis
// 17 February 2016
// Source.cpp


#include "AssignmentManager.h"
#include "Date.h"
#include "StringTokenizer.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void main()
{
	//file input variables
	ifstream fin("input.txt");
	//if input file not found, quit with an error message
	if (!fin)
	{
		cout << "Input fle not opened!" << endl;
		exit(1);
	}

	int sel;
	cout << "Select option: " << endl;
	cout << "(1) Display assignments" << endl;
	cout << "(2) Add assignment" << endl;
	cout << "(3) Edit due date" << endl;
	cout << "(4) Edit description" << endl;
	cout << "(5) Complete assignment" << endl;
	cout << "(6) Number of late assignments" << endl;
	cout << "(7) Save" << endl;
	cout << "(8) Exit" << endl;
	cin >> sel;

	switch (sel) {
	case '1':

		break;
	case '2':

		break;
	case '3':

		break;
	case '4':

		break;
	case '5':

		break;
	case '6':

		break;
	case '7':

		break;
	case '8':

		break;
	default:
		cout << "Invalid option.  Try again." << endl;
	}



	system("pause");
	return;
}