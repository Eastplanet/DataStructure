#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
	Queue queue(5);
	queue.push('a');
	queue.push('b');
	queue.push('c');
	queue.print();
	queue.pop();
	queue.pop();
	queue.push('d');
	queue.push('e');
	queue.peek();
	queue.pop();
	queue.pop();
	queue.pop();
	queue.pop();



	return 0;
}
