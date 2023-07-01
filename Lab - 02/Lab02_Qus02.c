#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// max_limit of the stack
int max_limit=50;
// struct declaration
struct stack{
    char parenthesis[50]; // for pushing stack element
    int pointer; // stack pointer
}
stack_of_parenthesis;

// push function to push element in the stack
void push(char element){
    // check if stack is full
    if (stack_of_parenthesis.pointer == (max_limit - 1)){
        // print the message
        printf ("Sorry! No more space to push elements in the stack");
    }
    else{
        // increment the pointer
        stack_of_parenthesis.pointer = stack_of_parenthesis.pointer + 1;
        // push element in the stack
        stack_of_parenthesis.parenthesis[stack_of_parenthesis.pointer] = element;
    }
}

// function pop to pop the element from the stack

char pop(){
    // check if stack is empty
    if (stack_of_parenthesis.pointer == - 1){
        return 0; // return 0
    }
    else{
        // get the popped element from the stack in variable element
        char element = stack_of_parenthesis.parenthesis[stack_of_parenthesis.pointer];
        // adjust the stack pointer
        stack_of_parenthesis.pointer = stack_of_parenthesis.pointer - 1;
        // return the element
        return element;
    }
}

// main function

int main(){
    // variable declarations

    int flag = 0;

    // initialize -1 to stack pointer
    stack_of_parenthesis.pointer = -1;

    char input[50];
    // get expression from the user

    printf("\nEnter your expression : ");

    scanf("%s", input);
    // loop till the end of the string(expression)
    for(int i = 0;i < strlen(input);i++){
        // switch case

        switch(input[i]){
            // if element is '('
            case '(':
                // push element to stack
                push(input[i]);
                break;
            // if element is ')'
            case ')':
                // pop the element from the stack and check if it matches with '('
                if(pop() != '(')
                    flag = 1;// make flag as 1
                    break;

        }
        // check if flag is 1
        if(flag ==1){
            // print the message
            printf("\nClosing parentheses not matched\n");
            // break the loop
            break;
        }

    }
    // if stack is not empty
    if(stack_of_parenthesis.pointer != -1){
        // print the message
        printf("\nOpening parentheses not end\n");
    }
    // if flag is 0
    else if(flag == 0){
        // print the message
        printf("\nError Free Expression\n");
    }

}
