/* Stack is a data structure that follows the LIFO (Last in First out) principle. Design and implement a stack to implement the following functions:
1. Push(num): Push the given number in the stack if the stack is not full.
2. Pop: Remove and print the top element from the stack if present, else print -1.
3. Top: Print the top element of the stack if present, else print -1.
4. isEmpty: Print 1 if the stack is empty, else print 0.
5. isFull: Print 1 if the stack is full, else print 0.
You have been given ‘m’ operations which you need to perform in the stack. Your task is to implement all the functions of the stack.*/

class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		arr[rear] = e;
		rear++;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		if(rear != front)
		{
			return arr[front++];
		}
		return -1;
	}
};
