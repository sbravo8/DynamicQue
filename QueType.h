
#ifndef QUETYPE_H
#define QUETYPE_H

class FullQueue {
};

class EmptyQueue {
};


template<class T>
class QueType {
public:
    QueType();

    // Class constructor.
    // Because there is a default constructor, the precondition 
    // that the queue has been initialized is omitted.
    QueType(int max);

    // Parameterized class constructor.
    ~QueType();

    // Class destructor.
    void MakeEmpty();

    // Function: Initializes the queue to an empty state.
    // Post: Queue is empty.
    bool IsEmpty() const;

    // Function: Determines whether the queue is empty.
    // Post: Function value = (queue is empty)
    bool IsFull() const;

    // Function: Determines whether the queue is full.
    // Post: Function value = (queue is full)
    void Enqueue(T newItem);

    // Function: Adds newItem to the rear of the queue.
    // Post: If (queue is full) FullQueue exception is thrown
    //       else newItem is at rear of queue.
    void Dequeue(T &item);
    // Function: Removes front item from the queue and returns it in item.
    // Post: If (queue is empty) EmptyQueue exception is thrown
    //       and item is undefined
    //       else front element has been removed from queue and
    //       item is a copy of removed element.
private:

    int front;
    int rear;
    T *items;
    int maxQue;
};

#include "QueType.cpp"

#endif