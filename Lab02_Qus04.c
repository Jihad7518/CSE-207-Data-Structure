#include <stdio.h>
#include <stdlib.h>

int MAXSIZE = 10, stack[10],top = -1; //limiting stack size to 10

int isempty(){ //checks if stack is empty
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull() { //checks if stack is full
    if(top == MAXSIZE){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(){ //gets the top element of stack
    int data;

    if(!isempty()){
        data = stack[top];
        top = top - 1;
        return data;
    }
    else{
        printf("Stack is empty.\n");
    }
}

int push(int data) { //adds element to stack

    if(!isfull()){
        top = top + 1;
        stack[top] = data;
    }
    else{
        printf("Stack is full.\n");
    }
}

int main() {
    int i=0,n,v;
    scanf("%d",&n);
    while (n>=1){
        v=n%2;
        push(v);
        n=n/2;
    }

    // printing stack data for binary output

    while(!isempty()){
        int data = pop();
        printf("%d",data);
    }

    return 0;

}
