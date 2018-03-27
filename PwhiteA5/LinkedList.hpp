


#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <stdexcept>
#include <iostream>

template<class T>
struct Node {

	T data;
	Node<T>* next;
	Node<T>* prev;

};



template <class T>
class LinkedList {

private:

	Node<T> *mHead;
	Node<T> *mTail;
	int mSize = 0;
	


public:
	
	LinkedList();
	LinkedList(const LinkedList&);
	~LinkedList();
	LinkedList<T>& operator=(const LinkedList& List);
	int size();
	T at(int) const;
	void push_back(const T);
	void push_front(const T);
	T pop_back();
	T pop_front();
};

template <class T>
LinkedList<T>::LinkedList() {

	mHead = NULL;
	mTail = NULL;
	mSize = 0;

}
template <class T>
LinkedList<T>::LinkedList(const LinkedList& list) {

	mSize = 0;
	Node<T>* current = list.mHead;
	for (int i = 0; i < list.mSize; i++) {
		T value = current->data;
		push_back(value);
		current = current->next;
	}


}
template <class T>
LinkedList<T>::~LinkedList() {

	while (mHead != NULL) {
		pop_front();
	}
}


template <class T>
void LinkedList<T>::push_front(T value) {

	Node<T> *n = new Node<T>;
	n->data = value;

	if (mHead == NULL) {
		mHead = n;
		mTail = n;
		n->prev = NULL;
		n->next = NULL;

	}
	else {
		mHead->prev = n;
		n->next = mHead;
		n->prev = NULL;
		mHead = n;
	}
	mSize += 1;
}

template <class T>
void LinkedList<T>::push_back(T value) {

	Node<T>  *n = new Node<T>;
	n->data = value;

	if (mTail == NULL) {
		mTail = n;
		mHead = n;
		n->next = NULL;
		n->prev = NULL;
	}
	else {

		mTail->next = n;
		n->prev = mTail;
		n->next = NULL;
		mTail = n;
	}
	mSize += 1;
}

template <class T>
T LinkedList<T>::pop_back() {

	Node<T> *temp;

	temp = mTail;
	if (mTail == NULL)
	{
		throw std::logic_error("List is empty");
	}
	if (mHead->next = NULL) {
		mHead = NULL;
		mTail = NULL;
	}
	else {
		mTail = mTail->prev;
		//mTail->next = NULL;


	}

	T value;
	value = temp->data;
	delete temp;
	mSize -= 1;
	return value;
}


template <class T>
T LinkedList<T>::pop_front() {

	Node<T> *temp;
	temp = mHead;
	if (mHead == NULL)
	{
		throw std::logic_error("The List is empty");
	}
	if (mTail == mHead) {
		mHead = NULL;
		mTail = NULL;
	}
	else {
		mHead = mHead->next;
		mHead->prev = NULL;
	}

	T value;
	value = temp->data;
	delete temp;
	mSize -= 1;
	return value;

}

template <class T>
T LinkedList<T>::at(int pos) const {
	
	Node<T>* temp = mHead;

	
	
		
		for (int i = 0; i < pos;i++) {

			temp = temp->next;
			
		
	}
	
	
	return temp->data;
	

	

}



template <class T>
int LinkedList<T>::size() {

	return mSize;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList& List)
{

	if (this != List) {
		~LinkedList();
		LinkedList(List);
	}

	return *this;
}

#endif
