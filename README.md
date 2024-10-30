# algorithms-and-data-structures_ex
Exercises 2

Let's define a stack as follows:
const int LIMIT = 30;
struct Stack
{
int tab[LIMIT];
int top;
};
The LIMIT constant defines the maximum number of elements that can be on the stack.
The stack will be stored in an object S of type Stack.

Task 1.
Write a program in which you create stack handling functions using the array implementation.

Write a function create(S) that sets the initial state of the stack (sets the stack to empty).

Task 2.
Write a function isEmpty(S) that returns 1 when the stack is empty and 0 when the stack is not empty.

Task 3.
Write a function isFull(S) that returns 1 when the stack is full and 0 when the stack is not full.

Task 4.
Write a function push(S,x) that pushes element x onto the stack. When inserting on the stack, check if the stack is full.
Task 5.
Write a function pop(S) that removes the element at the top of the stack and returns it as the result.

When removing an element from the stack, check if the stack is empty.

Removal involves decreasing the top variable by one, not actually removing the element from the array.
Task 6.
Create stack handling functions using the list implementation. Write a program that uses these functions.
