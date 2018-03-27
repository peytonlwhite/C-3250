/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 1
Date: 2/5/18
*/

#ifndef VECTOR_HPP
#define VECTOR_HPP

const int INIT_VALUE_CAPACITY = 10;
template <class T>

class vector
{
private:
	T* mArray;
	int mCapacity;
	int mSize;
	int mAssignments;

public:

	vector();
	vector<T>(const vector<T>&);
	~vector<T>();
	vector<T> operator=(const vector<T>&);
	int getCapacity();
	int size();
	int getAssignmentCount();
	void push_back(const T);
	T& operator[](int);                  // write
	const T& operator[](int) const;      // read



};

template <class T>
vector<T>::vector()
{
	mCapacity = 10;
	mSize = 0;
	mArray = new T[mCapacity];
	mAssignments = 0;

}

template <class T>
vector<T>::vector(const vector<T>& fvector)
{
	mSize = fvector.mSize;
	mCapacity = fvector.mCapacity;
	mArray = new T[mCapacity];

	for (int i = 0; i < mSize;i++)
	{
		mArray[i] = fvector.mArray[i];
	}

}

template <class T>
vector<T>::~vector()
{
	delete[] mArray;
}



template <class T>
vector<T> vector<T>::operator=(const vector <T>& rhs)
{
	{
		if (this != &rhs)
		{
			delete[] mArray;
			mSize = rhs.mSize;
			mCapacity = rhs.mCapacity;
			mArray = new T[mCapacity];
			for (int i = 0;i < mSize;i++)
			{
				mArray[i] = rhs.mArray[i];
			}

			return *this;
		}
	}
}

template <class T>
void vector <T>::push_back(const T value)
{

	if (mSize >= mCapacity)
	{
		T* nextArray = new T[mCapacity * 2];

		for (int i = 0; i < mSize;i++)
		{
			nextArray[i] = mArray[i];
			mAssignments++;
		}
		delete[]mArray;
		mArray = nextArray;
		mCapacity = mCapacity * 2;
	}

	mArray[mSize] = value;
	mAssignments++;
	mSize++;
}

template <class T>
int vector <T>::getCapacity()
{
	return mCapacity;

}

template <class T>
int vector <T>::size()
{
	return mSize;
}

template <class T>
int vector<T>::getAssignmentCount()
{
	return mAssignments;
}






template <class T>
T& vector<T>::operator[](int index) {
	return mArray[index];
}


template <class T>
const T& vector<T>::operator[](int index) const {
	return mArray[index];
}




#endif // !VECTOR_HPP
