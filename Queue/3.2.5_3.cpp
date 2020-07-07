/*
To ensure the sequence, 
the data in S1 must be popped as an entirety to S2
and S2 must be empty.
*/



bool EnQueue(Stack& S1, Stack& S2, ElemType x) 
{
	//S1 is full but S2 is not empty
	if (StackOverflow(S1) && !StackEmpty(S2)) 
	{
		return false;
	}

	//S1 is full and S2 is empty
	if (StackOverflow(S1) && StackEmpty(S2)) 
	{
		while (!StackEmpty(S1)) {
			ElemType temp;
			Pop(S1, temp);
			Push(S2, temp);
		}

		Push(S1, x);
		return true;
	}
	
	//S1 is not full
	if (!StackOverflow(S1)) 
	{
		Push(S1, x);
		return true;
	}
	
}

bool DeQueue(Stack& S1, Stack& S2, ElemType& x) 
{
	if (!StackEmpty(S2)) 
	{
		Pop(S2, x);
		return true;
	}
	else if (StackEmpty(S1)
	{
		return false;
	}
	else
	{
		while (!StackEmpty(S1)) 
		{
			ElemType temp;
			temp = Pop(S1,temp);
			Push(S2, temp);
		}

		Pop(S2, x);
		return true;
	}
}

bool QueueEmpty(Stack& S1, Stack& S2) {
	if (StackEmpty(S1) && StackEmpty(S2)) 
	{
		return true;
	}
	else
	{
		return false;
	}
}