/*
        A Queue, linked list interpretation
        Works for the primitive type int

*/
#include <iostream>
using namespace std;
class Queue
{
        public:

                // Constructor
                Queue(unsigned int capacity);

                // adds an item to the queue (O(1) time)
                void enqueue(int num);

                // removes an item from the queue (O(1) time)
                int dequeue();



        private:

                class Node
                {
                                public:
                                        // default constuctor for making a Node
                                        Node(int num)
                                        {
                                                data = num;
                                        };

                                        //pointer to the next item in queue
                                        Node * next;

                                        // data of queue
                                        int data;
                };

                // keeps track of the front of the list
                Node * head;

                // keep track of the rear of the list
                Node * last;

                // number of items currently on queue
                int length;

                // total capacity of the queue
                int size;



};
