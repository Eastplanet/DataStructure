#include <iostream>
#include "CircularQueue.h"
using namespace std;
int main()
{
	CircularQueue que(5);
	que.enqueue('a');
	que.enqueue('b');
	que.enqueue('c');
	que.enqueue('d');
	que.enqueue('e');
	que.enqueue('f');
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	return 0;
}
