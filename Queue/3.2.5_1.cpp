#include <iostream>
#include "SqQueue_With_Tag.h"
using namespace std;


int main(void) {
	SqQueue_With_Tag Q;
	InitQueue(Q);
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	int res = EnQueue(Q, 4);
	cout << res;
	int x = 0;
	res = DeQueue(Q, x);
	cout << res;
	res = DeQueue(Q, x);
	cout << res;
	res = DeQueue(Q, x);
	cout << res;
	res = DeQueue(Q, x);
	cout << res;
}