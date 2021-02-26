#ifndef Queue_H
#define Queue_H
#include<iostream>
using namespace std;
class Queue{
private:
	int top,front, MaxSize;
	char* queue;
public:
	Queue(int size);
	bool isEmpty();
	bool isFull();
	void push(char element);
	char pop();
	void peek();
	void print();
};

Queue::Queue(int size) {
	MaxSize = size-1;
	top = -1;
	front = -1;
	queue = new char[size];
}
bool Queue::isEmpty() {
	if (top == front && MaxSize-1 != top)return true;
	else return false;
}
bool Queue::isFull() {
	if (top == MaxSize)return true;
	else return false;
}
void Queue::push(char element) {
	if (isFull())cout << "Queue Full\n";
	else queue[++top] = element;
}
char Queue::pop() {
	if (isEmpty())cout << "Queue Empty\n";
	else return queue[++front];
}
void Queue::peek() {
	if (isEmpty())cout << "Queue Empty\n";
	else cout << queue[top] << endl;
}
void Queue::print() {
	if (isEmpty())cout << "Queue Empty\n";
	for (int i = front+1; i <= top; i++) {
		cout << queue[i] << endl;
	}
}
#endif 

