#include "MyHeap.h"
#include <iostream>

int main()
{
	Heap heap;

	for (int num : {7, 4, 12, 27, 11, 6, 31, 5, 0, 1})
	{
		heap.push(num);
	}

	while (false == heap.empty())
	{
		std::cout << heap.top() << ' ';
		heap.pop();
	}
}