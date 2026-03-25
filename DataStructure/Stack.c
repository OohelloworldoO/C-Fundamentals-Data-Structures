#include<stdio.h>
#include<stdbool.h>
int main()
{ 
    //Define the maximum capacity of the stack
    #define MAX_SIZE 100 

    //Define a structure for the stack
    typedef struct
    {   
        int arr[MAX_SIZE];
        int top;
    }Stack;

    //Function to initialization the stack
    void initialize(Stack *stack)
    {
        stack -> top = -1;
    }
    

}