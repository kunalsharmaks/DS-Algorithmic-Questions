#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;

void createList(int n);
void display();
void reverse();

int main()
{
	int n, ch;
	printf("Enter no of nodes: \n");
	scanf("%d",&n);
	createList(n);
	
	printf("List: \n");
	display();
	
	printf("Enter 1 to Reverse List: \n");
	scanf("%d",&ch);
	
	if(ch == 1)
	{
		reverse();
	}
	
	printf("List: \n");
	display();
}

void createList(int n)
{
	int i, data;
	struct node *newNode, *temp;
	
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("Unable");
		exit(0);
	}
	
	printf("Enter Data: \n");
	scanf("%d",&data);
	
	head->data = data;
	head->next = NULL;
	
	temp = head;
	for(i=2;i<=n;i++)
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		if(newNode == NULL)
		{
			printf("Unable");
		}
		
		printf("Enter Data: \n");
		scanf("%d",&data);
		
		newNode->data = data;
		newNode->next = NULL;
		
		temp->next = newNode;
		temp = temp->next;
	}
}

void display()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("List is empty: \n");
	}
	
	temp = head;
	while(temp != NULL)
	{
		printf("Data: %d\n",temp->data);
		temp = temp->next;
		
	}
}

void reverse()
{
	struct node *prevnode, *currentnode, *nextnode;
	prevnode = 0;
	currentnode = head;
	nextnode = head;
	
	while(nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	
	head = prevnode;
}
