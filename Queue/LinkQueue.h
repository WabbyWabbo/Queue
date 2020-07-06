#include <malloc.h>
typedef int ElemType;


typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode;

typedef struct {
	LNode* front, * rear;
}LinkQueue;


void InitQueue(LinkQueue& Q) {
	Q.front = Q.rear = (LNode*)malloc(sizeof(LNode));
	Q.front->next == NULL;
}

bool IsEmpty(LinkQueue Q) {
	if (Q.front = Q.rear)
		return false;
	else
		return true;
}

void EnQueue(LinkQueue& Q, ElemType x) {
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = x;
	s->next = NULL;//don't forget it
	Q.rear->next = s;
	Q.rear = s;
}

bool DeQueue(LinkQueue& Q, ElemType& x) {
	if (Q.front == Q.rear)
		return false;

	LNode* first_Elem = Q.front->next;
	x = first_Elem->data;
	Q.front->next = first_Elem->next;
	//if only one element ,first_Elem == rear
	//rear should be moved before freed
	if (first_Elem = Q.rear)
		Q.rear = Q.front;
	free(first_Elem);

	return true;
}