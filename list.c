#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node {
	int data;
	struct node* next;
};

struct node*head=NULL;
struct node*temp=NULL;
void insert(int val) {
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL) {
		head=newnode;
		return;
	}
	temp=head;
	while(temp->next!=NULL) {
		temp=temp->next;
	}
	temp->next=newnode;

}
void deletion() {
	int count=0;
	while(temp->next!=NULL) {
		count++;

	}
}
void display() {
	struct node*ptr=head;;
	while(ptr!=NULL) {
		printf("%d =>",ptr->data);
		ptr=ptr->next;
	}
}
int main(int argc, char *argv[]) {
	int op,val,pos;
	
	printf("Enter 1 for insertion");
	printf("Enter 2 for deletion");
	printf("Enter 3 for insertion");
	printf("Enter 4 for insertion");
	printf("Enter 5 for insertion");
	
	printf("Enter operation to be performed: ");
	scanf("%d",&op);
	switch(op) {
		case 1:
			printf("Enter the element to be inserted: ");
			scanf("%d",&val);
			printf("%d is inserted",val);
			break;
		case 2:
			printf("Enter the element to be deleted: ");
			scanf("%d",&val);
			printf("%d is deleted",val);
			break;
		case 3:
            printf("Enter the num: ");
            sacnf("%d",&val);
			printf("Enter the position of element to be inserted: ");
			scanf("%d",&pos);
			printf("%d is inserted at %d position",val,pos);
			break;
		case 4:
			printf("Enter the position of element to be deleted: ");
			scanf("%d",&pos);
			printf("Element at %d position is deleted",pos);
			break;
		default:
			printf("Check for ur input");
            break;
	}
	insert(10);
	insert(20);
	display();
	return 0;
}
