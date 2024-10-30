//Task 1.

#include <iostream>
const int LIMIT = 30;
struct Stack {
	int tab[LIMIT];
	int top;
};
void create(Stack &S) {
	S.top = -1; // Set the stack to empty
}
int main() {
	Stack S;
	create(S); // Create a stack and set it to empty
// Now we can perform operations on the stack, e.g. add elements, remove elements, check state, etc.
	return 0;
}


//Task 2.

int isEmpty(Stack S) {
	if (S.top == -1) {
		return 1; // The stack is empty
	} else {
		return 0; // The stack is not empty
	}



//Task 3.

int isFull(Stack S) {
	if (S.top == LIMIT - 1) {
		return 1; // Stack is full
	} else {
		return 0; // Stack is not full
	}



//Task 4.

void push(Stack &S, int x) {
	if (isFull(S)) {
		cout << "Cannot add item. Stack is full." << endl;
	} else {
		S.top++;
		S.tab[S.top] = x;
		cout << "Added item " << x << " to stack." << endl;
	}



//Task 5.

int pop(Stack &S) {
	if (isEmpty(S)) {
	cout << "Cannot remove item. Stack is empty." <<endl;
		return -1; // We return -1 as a value indicating an error
	} else {
		int item = S.tab[S.top];
		S.top--;
		cout << "Removed item " << item << " from stack." <<endl;
		return element; // Return the removed element
	}
}


//Task 6.

#include <iostream>
using namespace std;
const int LIMIT = 30;
struct Stack {
	int tab[LIMIT];
	int top;
};
void create(Stack &S) {
	S.top = -1; // Set the stack to empty
}
int isEmpty(Stack S) {
	if (S.top == -1) {
		return 1; // The stack is empty
	} else {
		return 0; // The stack is not empty
	}
}
int isFull(Stack S) {
	if (S.top == LIMIT - 1) {
		return 1; // The stack is full
	} else {
		return 0; // Stack is not full
	}
}
void push(Stack &S, int x) {
	if (isFull(S)) {
		cout << "Cannot add item. Stack is full." <<endl;
	} else {
		S.top++;
		S.tab[S.top] = x;
		cout << "Added item " << x << " to stack." <<endl;
	}
}
int pop(Stack &S) {
	if (isEmpty(S)) {
		cout << "Cannot remove item. Stack is empty." <<endl;
		return -1; // Return -1 as bag
	} else {
		int element = S.tab[S.top];
		S.top--;
		cout << "Removed item " << element << " from stack." <<endl;
		return element; // Return the removed element
	}
}
int main() {
	Stack S;
	create(S); // Create a stack and set it to empty
// Stack operations
	push(S, 5);
	push(S, 10);
	push(S, 15);
	pop(S);
	pop(S);
	return 0;
}
