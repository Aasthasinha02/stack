// Sample code to perform I/O:
#include <stdio.h>

#define MAX_CAPACITY 100

// Global stack variables
int stackArray[MAX_CAPACITY];  // stack array
int stackTop = 0;             // index specifying where insertion should happen

//----------------------------------------------------------------
// Name: Push
// Description: This function inserts "value" into the stack top
// Parameters value: Value to insert in stack
// Return: Nothing
//-----------------------------------------------------------------
void Push(int value)
{
    if (stackTop == MAX_CAPACITY)
    {
        printf("Stack overflow!\n");
        return;
    }
    
    stackArray[stackTop] = value;
    stackTop++;
}

//----------------------------------------------------------------
// Name: Pop
// Description: This function returns value at stack top
// Parameters 
// Return: Value at stack top (integer)
//-----------------------------------------------------------------
int Pop(void)
{
    int poppedValue = 0;
    
    if (stackTop == 0)
    {
        printf("Stack is empty!\n");
        return -1;
    }
    
    poppedValue = stackArray[--stackTop];
   return poppedValue;
}

// Main function to test Push and Pop functions
int main()
{
	
	//int inputArray[] = {5, 10, 2, 30, 50, 7, 1, 0, 45};
	int inputArray[] = {5, 10};
	int numValues = sizeof(inputArray)/ sizeof(inputArray[0]);
	
    for (int i = 0; i < numValues; i++)
    {
        Push(inputArray[i]);
    }
    
    int poppedValue = 0;
    poppedValue = Pop();
    printf("Popped Value: %d\n", poppedValue);
    
    poppedValue = Pop();
    printf("Popped Value: %d\n", poppedValue);
    
    poppedValue = Pop();
    printf("Popped Value: %d\n", poppedValue);
    
    poppedValue = Pop();
    printf("Popped Value: %d\n", poppedValue);
    
    return 0;
}
