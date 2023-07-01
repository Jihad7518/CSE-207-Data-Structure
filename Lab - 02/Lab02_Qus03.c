#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>


// This is where the parentheses are stored in memory
char buffer[1024];
char stack_pop();
void stack_push(char ch);
int stack_size();


int main(int argc, char* argv[]){
    FILE *fp;
    char *pch;
    char ch;
    int correct = 1;

    // The parentheses sequences is in the parentheses.txt file.
    if (argc > 1) {
        fp=fopen(argv[1],"r");
    }
    else {
        fp=fopen("parentheses.txt","r");
    }
    if(fp==NULL){
        printf("The input file does not exist.\n");
        exit(-1);
    }

    // Read the parenthese sequences into buffer array.

    fgets(buffer,1024,fp);
    printf("Input: s = \"%s\"\n",buffer);

    for (pch = buffer; *pch != '\0'; pch++ ) {
        if (*pch == '(' || *pch == '[' || *pch == '{') {
            stack_push(*pch);
        }
        else if (stack_size() == 0 ) {
            correct = 0;
            break;
        }
        else {
            ch = stack_pop();
            if (ch == '(' && *pch != ')') {
                correct = 0;
                break;
            }
            if (ch == '[' && *pch != ']') {
                correct = 0;
                break;
            }
            if (ch == '{' && *pch != '}') {
                correct = 0;
                break;
            }
        }
    }

    if (correct) {
        printf("Output: true\n");
    }
    else {
        printf("Output: false\n");
    }

    return 0;
}


char stack[1024];
int top=0;
// The pop operation in the stack. To be done.
char stack_pop(){
    return stack[--top];
}

// The push operation in the stack. To be done.
void stack_push(char ch){
    stack[top++] = ch;
}

// The number of elements in the stack. To be done.
int stack_size(){
    return top;
}
