#include <iostream>
#include "PriorityQueue.h"
int main() {

    PriorityQueue<string, int> queue;
    cout << "\n\tEnqueuing 'valen'...\n";
    queue.enqueue("valen", 3);
    cout << "\n\tEnqueuing 'venus'...\n";
    queue.enqueue("venus", 0);
    cout << "\n\tEnqueuing 'hernan'...\n";
    queue.enqueue("hernan", 2);
    cout << "\n\tEnqueuing 'may'...\n";
    queue.enqueue("may", 4);
    cout << "\n\tEnqueuing 'jorge'...\n";
    queue.enqueue("jorge", 1);
    queue.show();
    cout << "\n\tDequeuing...\n";
    queue.dequeue();
    queue.show();
    cout << "\n\tDequeuing...\n";
    queue.dequeue();
    queue.show();
    cout << "\n\tEnqueuing 'tomas'...\n";
    queue.enqueue("tomas", 0);
    queue.show();
    cout << "\n\tEnqueuing 'carla'...\n";
    queue.enqueue("carla", 1);
    queue.show();
    return 0;
}