#include <stdio.h>
#define MAX 10
int stack_arr[MAX];
int top=-1;
void push (int item);
int pop();
void display();
void main()
{
    int choice,item;
    while (1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.quit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
    switch(choice)
    {
     case 1:
     printf("enter the item to be pushed:");
     scanf("%d",&item);
     push(item);
     break;
     case 2:
     item=pop();
     printf("popped item is:%d\n",item);
     break;
     case 3:
     display();
     break;
     case 4:
     printf("exit");
     default:
     printf("wrong choice");
    }
  }
}
void push()
{
    int val;
    if(top==(MAX-1))
    {
        printf("overflow");
        return;
    }

else
   top=top+1;
   printf("enter value:");
   scanf("%d",&val);
   stack[top]=val;

}

int pop()
{
int item;
if(top==-1)
{
    printf("under flow");
    return;
}
else
{
    item=stack_arr[top];
    top=top-1;
    printf("%d"deleted item is:);

}
}

void display()
{
    if(top==0)
    {
        printf("stack is empty");
        return;
    }
    else{
        int i;
        printf("stack is :");
        for(int i=0;i<top;i++);
        {
            printf("%d",arr[i]);
        }
        return;
    }
}
