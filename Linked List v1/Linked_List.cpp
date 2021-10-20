#include "Linked_List.h"

List::List() {}
List::List(int value) {}
List::List(const List& list) {}

int List::at(int index) {}
int List::front() {}
int List::back() {}

void List::pop_at(int index) {}
void List::pop_front() {}
void List::pop_back() {}

void List::push_at(int index, int value) {}
void List::push_front(int value) {}
void List::push_back(int value) {}

// Overloaded Operators
void List::operator= (const List& right) {}
// istream& operator>> (istream& is, Node* &head);
// ostream& operator<< (ostream& os, Node* head);

List::~List() {}