#include <iostream>
#include "SqStack.h"
#include "SqQueue.h"

void Reverse_Queue(SqQueue& Q, SqStack& S) {
	ElemType temp;

	while (!isEmpty(Q)) {
		DeQueue(Q, temp);
		Push(S, temp);
	}

	while (!StackEmpty(S)) {
		Pop(S, temp);
		EnQueue(Q, temp);
	}
}
