#ifndef CircularQueue_H
#define CrucularQueue_H
#include <iostream>
using namespace std;
class CircularQueue {
private:
	int front, rear,maxsize;
	char* queue;
public:
	CircularQueue(int size);
	bool isEmpty();
	bool isFull();
	void dequeue();
	void enqueue(char element);
};
CircularQueue::CircularQueue(int size) {
	maxsize = size;
	front = 0;
	rear = 0;
	queue = new char[maxsize + 1];
}
bool CircularQueue::isEmpty() {
	if (front == rear)return true;
	else return false;
}
bool CircularQueue::isFull() {
	if (((rear + 1) % (maxsize+1)) == front)return true;
	else return false;
}
void CircularQueue::dequeue() {
	if (isEmpty())cout << "QUEUE Empty" << endl;
	else cout << queue[(++front) % (maxsize+1)]<<endl;
}
void CircularQueue::enqueue(char element) {
	if (isFull())cout << "Queue Full" << endl;
	else  queue[(++rear) % (maxsize+1)] = element;
}
#endif
