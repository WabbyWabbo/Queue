#define MaxSize 3

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int front, rear;//front is for A1, rear is for An's next
	int tag;
}SqQueue_With_Tag;

void InitQueue(SqQueue_With_Tag& Q) {
	Q.front = 0;
	Q.rear = 0;
	Q.tag = 0;
}
bool EnQueue(SqQueue_With_Tag& Q, ElemType x) {
	if (Q.front == Q.rear && Q.tag == 1) {
		return false;
	}

	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	if (Q.rear == Q.front) {
		Q.tag = 1;
	}
	return true;
}

bool DeQueue(SqQueue_With_Tag& Q, ElemType& x) {
	if (Q.front == Q.rear && Q.tag == 0) {
		return false;
	}

	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	if (Q.front == Q.rear) {
		Q.tag = 0;
	}
	return true;
}