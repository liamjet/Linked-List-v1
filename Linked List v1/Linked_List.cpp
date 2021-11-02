#include "Linked_List.h"

List::List() : head(nullptr), tail(nullptr), num_nodes(0) {}

List::List(const List& list) {
	head = nullptr;
	tail = nullptr;
	num_nodes = 0;

	Node* temp = list.head;
	while (temp != nullptr) {
		push_back(temp->value);
		temp = temp->next;
	}

}

int List::at(size_t index) {
	Node* node = head;
	for (size_t i = 0; i < index; i++) {
		node = node->next;
	}
	return node->value;
}

int List::front() {
	return head->value;
}

int List::back() {
	return tail->value;
}

void List::pop_at(size_t index) {}
void List::pop_front() {}
void List::pop_back() {}

void List::push_at(size_t index, int value) {
	if (head == nullptr || index <= 0) {
		push_front(value);
	}
	else if (index >= num_nodes) {
		push_back(value);
	}
	else {
		Node* temp = head;
		for (size_t i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		Node* node = new Node;
		node->value = value;
		node->prev = temp;
		node->next = temp->next;
		temp->next->prev = node;
		temp->next = node;
		num_nodes++;
	}
}


void List::push_front(int value) {
	
	if (head == nullptr) {
		Node* node = new Node;
		node->next = nullptr;
		node->prev = nullptr;
		head = node;
		tail = node;
		num_nodes++;
	}
	else {
		Node* node = new Node;
		node->next = head;
		node->prev = nullptr;
		head->prev = node;
		head = node;
		num_nodes++;
	}
}

void List::push_back(int value) {
	if (head == nullptr) {
		push_front(value);
	}
	else {
		Node* node = new Node;
		node->value = value;
		node->prev = tail;
		node->next = nullptr;
		tail->next = node;
		tail = node;
	}
}

// Overloaded Operators
void List::operator= (const List& right) {}
// istream& operator>> (istream& is, Node* &head);
// ostream& operator<< (ostream& os, Node* head);

List::~List() {}