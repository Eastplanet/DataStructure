#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
	Stack stack(5);
	stack.push('a');
	stack.push('b');
	stack.push('a');
	stack.push('b');
	stack.push('a');
	stack.push('b');
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();

	return 0;
}
