#include <iostream>

class LinkedList{

};

class Node{
public:
	Node(){}

	Node(int value, Node* prev = NULL, Node* next = NULL) :
	value(value),
	next(next),
	prev(prev)
	{}

	int value = 0;
	Node *prev;
	Node *next;

	void info(){
		std::cout << "Value: " << this->value << '\n';
		std::cout << "Address: " << this << '\n';
		std::cout << "Prev: " << this->prev << '\n';
		std::cout << "Next: " << this->next << '\n';
		std::cout << "------------------\n";
	}
};

int main(){
	Node head;
	head.value = 1;

	Node second;
	second.value = 2;

	Node third;
	third.value = 3;

	head.next = &second;

	second.prev = &head;
	second.next = &third;

	third.prev = &second;

	head.info();
	second.info();
	third.info();



	return 0;
}
