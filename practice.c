#include <stdio.h>
#include <stdlib.h>

void printList(struct Node *listp) {

struct Node *tmp=listp;

printf("[ ");

while (tmp!=NULL) {

//printf("%d ", tmp->data);

tmp=tmp->next;

}

printf("]\n");

return;

}

struct Node *insert(struct Node *listp, int pos, int info) {

/*Inserts a Node in list at position pos with data info

pos>0. If pos>list length then new node added at end.

If pos<1 adds at beginning.

*/

struct Node *new=malloc(sizeof(struct Node)), *prev;

//create new node and initialize fields

new->data=info;

new->next=NULL;

if (listp==NULL) listp=new;

else

if (pos<=1) {

new->next=listp;

listp=new;

}

else {

//pos>1. Go to node at pos-1.

prev=listp;

int i=1;

while ((i++<pos-1) && prev->next!=NULL) {

prev=prev->next;

}

new->next=prev->next;

prev->next=new;

}

return listp;

}

struct Node *delete(struct Node *listp, int pos) {

/*Deletes Node at position pos. pos>0.

If pos> list length then deletes last node.

If pos<1 deletes first node.

*/

struct Node *prev, *temp;

if (listp==NULL) return NULL;

else

if (pos<=1) {temp=listp; listp=listp->next; free(temp);}

else {//pos>1

int i;

prev=listp;

i=1;

while (i++<pos-1 && (prev->next)->next!=NULL) {

prev=prev->next;

}

temp=prev->next;//node to be deleted

prev->next=(prev->next)->next;//node removed from list

free(temp);//send memory back to store

}

return listp;

}

int main(void) {

char op;

int pos, info;

struct Node *listp=NULL;

//operation loop

while (1) {

printf("Operation add(a)/delete(d)/exit(e) = ");

scanf("%c",&op);

getchar();//purge the newline

switch (op){

case 'a':{

printf("Give position and data for insert =");

scanf("%d %d", &pos, &info);

getchar();//purge the newline char

listp=insert(listp, pos, info);

printList(listp);

break;}

case 'd':{

printf("Give position for delete =");

scanf("%d", &pos);

getchar();//purge newline char

listp=delete(listp, pos);

printList(listp);

break;}

case 'e': {exit(0);}

default: {printf("Illegal operation\n");}

}

}

exit(0);

}
