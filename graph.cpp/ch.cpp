#include<iostream>
#include "queue.h"
using namespace std;
int main()
{
    enqueue(5);
    enqueue(7);
    dequeue();
    printf("%d,\n",isempty());
    dequeue();
     printf("%d,\n",isempty());
    return 0;
}