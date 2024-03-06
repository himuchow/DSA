#include <stdio.h>
#include<stdlib.h>
typedef struct stack{
    int data;
    struct stack *link;
}stack;

void push (stack**);
void pop(stack**);
void display(stack*);

void main(){
    stack *top=NULL;
    int ch;

do{
    printf("\nStack operation--\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.display\n");
    printf("4.exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        push(&top);
        break;

        case 2:
        pop(&top);
        break;
        case 3:
        display(top);
        case 4:
        printf("exit");
        default:
        printf("invalid choice");
        return;

    }
}while(ch!=4);
}
void push(stack**top){
    stack*temp;
    int n;
    printf("enter a value:");
    scanf("%d",&n);
    temp=(stack*)malloc(sizeof(stack));
    temp->data=n;
    temp->link=*top;
    *top=temp;
    printf("number is %d successfully pushed",n);
}


void pop(stack**top){
    if(*top==NULL){
    printf("stack is empty");
}
else{
    int val=(*top)->data;
    stack*temp=*top;
    *top=(*top)->link;
    printf("the popped item is:%d",val);
    free(temp);

}
}
void display(stack*top){
    stack*temp=top;
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        printf("stack is:");
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->link;
        }
    }
}


