#include "queue.h"

Queue::Queue(unsigned int capacity)//default constrictor
{
        // initialize size variables
        length = 0;
        size = capacity;

        // initialize tracking pointers
        head = NULL;
        last = NULL;
}


void Queue::enqueue(int num)
{
        if(length == size)
        {
                cout << "Invalid Operation: Queue is already full" << endl;
                return;
        }


        Node * newNode = new Node(num);
        if(length == 0)
        {
                head = newNode;
                last = newNode;
                length++;
                return;
        }

        Node * lastNode = last;
        lastNode -> next = newNode;
        last = newNode;

        length++;
        //cout << "item added" << endl;
}

int Queue::dequeue()
{
        if(length == 0)
        {
                cout << "Invalid Operation: Queue is empty" << endl;
                return -1; // return -1 if queue is empty
        }
          
        int entry = head -> data; // get data of item to dequeue
        Node * temp = head -> next;
         
        delete head; // delete head from memory

        head = temp; // move pointer off item
        length--; // decrement length

        return entry;
    
    
}   
