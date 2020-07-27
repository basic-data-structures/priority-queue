#include <iostream>
#include "PriorityQueue.h"
int main() {
    PriorityQueue<string, int> queue;
    queue.enqueue("valen", 3);
    queue.enqueue("venus", 0);
    queue.enqueue("hernan", 2);
    queue.enqueue("may", 4);
    queue.enqueue("mono", 1);
    queue.show();
    queue.dequeue();
    queue.show();
    return 0;
}