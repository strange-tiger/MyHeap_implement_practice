#include <cstdio>
#include "MyHeap.h"

int main()
{
	Heap heap;
	heap.push(1);
	heap.push(9);
	heap.push(8);
	heap.push(7);
	heap.push(6);
	heap.push(15);
	heap.push(4);
	heap.push(3);
	heap.push(2);

	printf("%d\n", heap.top());

	heap.push(18);
	printf("%d\n", heap.top());

	heap.pop();
	printf("%d\n", heap.top());

	printf("%d\n", heap.size());
}