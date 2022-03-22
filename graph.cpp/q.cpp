#include<iostream>
#include "queue.h"
using namespace std;
int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(6);
    enqueue(3);
    while(!isempty())
    {
        printf("%d,",dequeue());
    }
    display();
    return 0;
}