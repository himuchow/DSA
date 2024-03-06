#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *st;
void add_beg();
void add_end();
void add_spec();
void display();
void delete_beg();
void delete_end();
void delete_spec();
void count_node();
void max_node();
void min_node();

void add_beg()
{
	struct node *tem;
	int val;
	tem=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the value: ");
	scanf("%d",&val);
	tem->data = val;
	tem->next = NULL;
	if(st == NULL){
		st = tem;
	}
	else{
		tem->next = st;
		st = tem;
	}
	printf("\n Number %d insertion is successful\n",val);
}

void add_end()
{
	struct node *tem,*p; int val;
	tem = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the value: ");
	scanf("%d",&val);
	tem->data = val;
	tem->next = NULL;
	if( st == NULL){
		st = tem;
	}
	else{
		p = st;
		while(p->next!= NULL){
			p = p->next;
		}
		p->next = tem;
		tem->next = NULL;
	}
	printf("\n Number %d insertion is successful\n",val);
}

void add_spec()
{
	struct node *tem,*p;
	int i, loc, val;
	printf("\nEnter the value: ");
	scanf("%d",&val);
	printf("\nEnter the position after which you what to insert this number: ");
	scanf("%d",&loc);
	tem=(struct node*)malloc(sizeof(struct node));
	tem->data = val;
	tem->next = NULL;
	p = st;
	for(i=0;i<loc-1;i++)
	{
		if(p==NULL)
		{
			printf("The nodes is Unaccessible");
			return;
		}
		p = p->next;
	}
	tem->next = p->next;
	p->next = tem;
	printf("\nNumber %d insertion is successful\n",val);
}

void delete_beg(){
    struct node *temp;
    if (st == NULL){
    	printf("\n The list is empty\n");
    	return;
	}
	else{
		temp = st;
		st = st->next;
	    printf("\n Number %d is Deleted\n",temp->data);
	    free(temp);
	}
}

void delete_end(){
    struct node *ptr, *temp;
    if (st == NULL){
    	printf("\n The list is empty\n");
    	return;
	}
	else{
	temp = st;
    while(temp->next != NULL)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = NULL;
    printf("\nNumber %d is Deleted\n", temp->data);
    free(temp);
	}
}

void delete_spec(){
    int loc, i;
    struct node *ptr, *temp;
    if (st == NULL){
    	printf("\n The list is empty\n");
    	return;
	}
	else{
    ptr = st;
    printf("\nEnter the location for delete node: ");
    scanf("%d",&loc);
    for(i=0;i<loc-1;i++){
    	temp=ptr;
    	ptr = ptr->next;
	}
	temp->next = ptr->next;
	printf("\n Number %d deleted\n",ptr->data);
	free(ptr);
    }
}

void display(){
	struct node *tem;
	if(st==NULL){
		printf("\nList is Empty\n");
		return;
	}
	else{
		tem=st;
		printf("\nList contains=====>>>>> ");
		while(tem!=NULL){
			printf("%d ",tem->data);
			tem=tem->next;
		}
	}
}

void count_node(){
	int count=0;
	struct node *ptr;
	if(st==NULL){
		printf("\n List is empty\n");
		return;
	}
	else{
		ptr = st;
		while(ptr!=NULL){
			count = count+1;
			ptr = ptr->next;
		}
		printf("\nNumber of node is %d",count);
	}
}

void max_node(){
	int max = 0;
	struct node *ptr;
	if(st==NULL){
		printf("\nList is Empty\n");
		return;
	}
	else{
		ptr = st;
		while(ptr!=NULL){
			if(ptr->data>max){
				max = ptr->data;
			}
			ptr=ptr->next;
		}
		printf("\nMaximun value is %d \n",max);
	}
}

void min_node(){
	int min = 0;
	struct node *ptr;
	if(st==NULL){
		printf("\nList is Empty\n");
		return;
	}
	else{
		ptr = st;
		while(ptr!=NULL){
			if(ptr->data<min){
				min = ptr->data;
			}
			ptr=ptr->next;
		}
		printf("\nMinimun value is %d \n",min);
	}
}

void main(){
	int c, ch;

	do{
		printf("\n\n===== linked list memu ======\n\n");
		printf("Enter 1 to insert at begging\n");
		printf("Enter 2 to insert at end\n");
		printf("Enter 3 to insert at specific location\n");
		printf("Enter 4 to delete at begging\n");
		printf("Enter 5 to delete at end\n");
		printf("Enter 6 to delete at specific location\n");
		printf("Enter 7 to display the list\n");
		printf("Enter 8 to count number of nodes\n");
		printf("Enter 9 to find max value\n");
		printf("Enter 10 to find min value\n");
		printf("Enter 11 to exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				add_beg();
				break;
			case 2:
				add_end();
				break;
			case 3:
				add_spec();
				break;
			case 4:
				delete_beg();
				break;
			case 5:
				delete_end();
				break;
			case 6:
				delete_spec();
				break;
			case 7:
				display();
				break;
			case 8:
				count_node();
				break;
			case 9:
				max_node();
				break;
			case 10:
				min_node();
				break;
			case 11:
				printf("<<<<=====Thank you=====>>>>");
				break;
			default:
				printf("\n\n=====Wroing choice=====\n\n");
		}
	}while(ch!=11);
}
