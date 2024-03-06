#include <stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node*link;

}*front=NULL,*rear=NULL;

void insert(int item);
int del();
void display();

void  main()
{
    int choice, item;
    while(1)
    {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.quit\n");
        printf("---enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("input the element for adding:");
            scanf("%d",&item);
            insert(item);
            break;
            case 2:
            printf("deleted item is %d \n",del());
            break;
            case 3:
            display();
            break;
            case 4:
            printf("exit");
            default:
            printf("invalid choice");

        }
    }
}

void insert(int item)
{
    struct node*tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    if(tmp==NULL){
        printf("overflow");
        return;
    }
    tmp->info=item;
    tmp->link=NULL;
    if(front==NULL)
    front==tmp;
    else
    rear->link-tmp;
    rear=tmp;
}

int del()
{
    struct node*tmp;
    int item;
    if(front==NULL)
    {
        printf("queue is underflow");

    }

    tmp=front;
    item=tmp->info;
    front=front->link;
    free(tmp);
    return item;

}

void display()
{
    struct node *ptr;
    ptr=front;
    {
        printf("queue is empty\n");
        return;
    }
    printf("queue elements:");
    while(ptr!=NULL)
    {
    printf("%d",ptr->info);
    ptr=ptr->link;
    }


}
