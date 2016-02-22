#include <cstddef>

template<typename T>
class assigned {
private:
	struct DNode {
		T data;		//the data
		Date dueDate;
		string description;
		Date assignedDate;
		enum status = "assigned";
		DNode* next;	//the pointer to the next node
		DNode* prev;	//the pointer to the previous node
		//the constructor
		DNode(const node& dataItem, Date& theDueDate, string description, Date& theAssignedDate, enum theStatus, DNode* prevValue = NULL, DNode* nextVal = NULL) : 
			data(dataItem), dueDate(theDueDate), description(theDescription), assignedDate(theAssignedDate), status(theStatus), prev(prevValue), next(nextVal){}
	};

	DNode* head;		//reference to the head of the list
	DNode* tail:		//reference to the tail of the list
	size_t numItems;	//the size of the list

public:

	void print_list(const list<string>& li){

		list<string>::const_iterator iter = li.begin();

		while (iter != li.end()){
			cout << *iter;
			++iter;
			if (iter != li.end())
				cout << " ===> ";
		}

		cout << '\n';
	}

};