#ifndef Stack_H
#define Stack_H
#include<iostream>
using namespace std;
class Stack {
private:
	int top, MaxSize;
	char* stack;
public:
	Stack(int size);
	bool isFull(), isEmpty();
	char pop();
	void push(char element);
	void print();
};

Stack::Stack(int size) {
	MaxSize = size;
	stack = new char[MaxSize];
	top = -1;
}
bool Stack::isFull() {
	if (top == MaxSize - 1)return true;
	else return false;
}
bool Stack::isEmpty() {
	if (top == -1)return true;
	else return false;
}
char Stack::pop() {
	if (isEmpty())cout << "Stack Empty\n";
	else return stack[top--];
}
void Stack::push(char element) {
	if (isFull())cout << "Stack Full\n";
	else stack[++top] = element;
}
void Stack::print() {
	for (int i = 0; i < top; i++) {
		cout << stack[i] << endl;
	}
}
#endif
