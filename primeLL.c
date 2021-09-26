#include<stdio.h>
#include<stdlib.h>
void create();
void displayprime();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("press 1 for  create \n2 for dispayprime");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:displayprime();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}


}
void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 
 void displayprime()
 {
 	struct node*temp,*prime;
 	int i;
 	temp=head;
 	for(i=2;i<=temp->data/2;i++)
 	while(temp!=NULL)
 	{
 	if(temp->data%i!=0)
 	prime=temp;
 		temp=temp->next;
 			printf("%d\t",prime->data);
	}
 }

