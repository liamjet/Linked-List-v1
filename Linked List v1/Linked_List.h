#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Class Declaration
class List {

// Constructors and member functions
public:
	List();
	List(const List &list);

	int at(size_t index);
	int front();
	int back();

	void pop_at(size_t index);
	void pop_front();
	void pop_back();

	void push_at(size_t index, int value);
	void push_front(int value);
	void push_back(int value);

	// Overloaded Operators
	void operator= (const List& right);
	// istream& operator>> (istream& is, Node* &head);
	// ostream& operator<< (ostream& os, Node* head);
	
	~List();

// Node struct and private member variables
private:
	struct Node {
		int value;
		Node* next;
		Node* prev;
	};
	
	size_t num_nodes;
	Node* head;
	Node* tail;

};

#endif
