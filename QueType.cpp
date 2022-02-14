#include "QueType.h"


template<class T>
QueType<T>::QueType(int max)
// Parameterized class constructor
// Post: maxQue, front, and rear have been initialized.
//       The array to hold the queue elements has been dynamically
//       allocated.
{

}

template<class T>
QueType<T>::QueType()          // Default class constructor
// Post: maxQue, front, and rear have been initialized.
//       The array to hold the queue elements has been dynamically
//       allocated.
{

}

template<class T>
QueType<T>::~QueType()         // Class destructor
{
    delete[] items;
}

template<class T>
void QueType<T>::MakeEmpty()
// Post: front and rear have been reset to the empty state.
{

}

template<class T>
bool QueType<T>::IsEmpty() const
// Returns true if the queue is empty; false otherwise.
{
    return false;
}

template<class T>
bool QueType<T>::IsFull() const
// Returns true if the queue is full; false otherwise.
{
    return false;
}

template<class T>
void QueType<T>::Enqueue(T newItem)
// Post: If (queue is not full) newItem is at the rear of the queue;
//       otherwise a FullQueue exception is thrown.  
{

}

template<class T>
void QueType<T>::Dequeue(T &item)
// Post: If (queue is not empty) the front of the queue has been 
//       removed and a copy returned in item; 
//       othersiwe a EmptyQueue exception has been thrown.
{

}
