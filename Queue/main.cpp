#include "queue.h"
#include "iostream"

int main()
{
        Queue a(3);
        for(int i = 0; i < 5; i++)
        {
                a.enqueue(i);
        }


        for(int i = 0; i < 7; i++)
        {
                cout << a.dequeue() << endl;
        }


        return 0;
}
