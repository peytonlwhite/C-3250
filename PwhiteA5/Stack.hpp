
#ifndef STACK_HPP
#define STACK_HPP
#include <stdexcept>
#include "LinkedList.hpp"


template <class T>
class Stack {

private:

	LinkedList<T> stackObj;

public:
	Stack();
	void clear();
	int size();
	bool isEmpty();
	T top();
	T pop();
	void push(T);


};

/*
This method is an empty class constructor because there are no data memebers
*/
template <class T>
Stack<T>::Stack() {
	// empty constructor 
}

/* 
This method deletes the stack using pop to delete each input
*/
template <class T>
void Stack<T>::clear() {

	pop();
}

/*
This method reads the size from the linked list using the stakObj declared in the private 
and calls the linked list function get size and returns size of stack
*/
template <class T>
int Stack<T>::size()  {

	return stackObj.size();
}
/*
This method does the same has size()  but returns true if misize == 0. DRY
*/
template<class T>
bool Stack<T>::isEmpty() {

	if (size() == 0) {
		throw std::logic_error("stack is empty");
	}
	return size() == 0;
	
	
}
/*
This function checks if stack is empty and throws and error 
if not, returns value of the top of the stack
*/

template<class T>
T Stack<T>::top() {

	isEmpty();
	
	

	return stackObj.at(0);
	
	

}

/*

*/
template<class T>
T Stack<T>::pop() {

	isEmpty();
	
	
	return stackObj.pop_back();



}
template <class T>
void Stack<T>::push(T value) {

	stackObj.push_back(value);
}















#endif
