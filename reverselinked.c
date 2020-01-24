#include<stdlib.h>
#include <stdio.h>
void insertion(void);
void aae(void);
void aam(void);
void deletion(void);
struct Node
{
    int info;
    struct Node *link;
};
struct Node *start=NULL;
void insertion()
{
    
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element");
    scanf("%d",&newnode->info);
    newnode->link=start;
    start=newnode;
}
void traverse()
{
    struct Node *ptr;
    ptr=start;
    if(start==NULL)
    {
	printf("No element found\n");
	}
	else
	{
    printf("The elements are as follows:\n");
    while(ptr!=NULL)
    {
            printf("%d ",ptr->info);
            ptr=ptr->link;
    }
    printf("\n");
	}
}
void aae()
{
    struct Node *p;
    p=start;
    if(start==NULL)
    {
        struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element ");
    scanf("%d",&newnode->info);
    newnode->link=NULL;
    start=newnode;
    }
    else
    {
    while(p->link!=NULL)
    {
        p=p->link;
    }
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element ");
    scanf("%d",&newnode->info);
    p->link=newnode;
    newnode->link=NULL;
    }
}
void aam()
{
    int n;
    if(start==NULL)
    {
	printf("No elements found\n");
    }
    else
    {
    printf("Enter the element after which you want to insert the element");
    scanf("%d",&n);
    int check=0;
    struct Node *p=start,*loc;
    while(p->link!=NULL)
    {
	if(p->info==n)
	{
		check=1;
		loc=p;
		break;
	}
	else
	{
		p=p->link;
	}
    }
	if(check==0)
	{
		printf("!!!!!!!!!!!----------Element is not found-----------!!!!!!!!!!\n");
	}
	else 
	{
		struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
		int num;
		printf("Enter the element you want to add ");
		scanf("%d",&num);
		newnode->info=num;
		newnode->link=loc->link;
		loc->link=newnode;
	}
 }
}
void deletion()
{
	int check=0;
	if(start==NULL)
	{
		printf("No element to delete\n");
	}
	else
	{
		struct Node *p=start,*loc,*locp;
		int number;
		printf("Enter the item you want to delete ");
		scanf("%d",&number);
		if(start->info==number)
		{
			locp=NULL;
			loc=start;
		}
		else
		{
			struct Node *save=start;
			p=start->link;
 	        	while(p!=NULL)
    			{
				if(p->info==number)
				{
					check=1;
					loc=p;
					locp=save;
					break;
				}
				else
				{
					save=p;
					p=p->link;
				}
			}
		}
		if(check==0)
		{
			printf("!!!!!--------Element not found-----!!!!!!!!!!!!!!!\n");
		}
		else
		{
			locp->link=loc->link;
			loc=NULL;
		}
	}
}
void reverse()
{
    struct Node *pre=NULL,*current=start,*next=NULL;
    while(current!=NULL)
    {
	next=current->link;
        current->link=pre;
        pre=current;
        current=next;
    }
    start=pre;
}
struct Node* recurreverse()
{
   if (start == NULL || start->link == NULL) 
        return start;
    else
    {
       struct Node *rest = recurreverse(start->link); 
        start->link->link = start; 
        start->link = NULL; 
        return rest;
    }
        /* fix the head pointer */
        
}
int main()
{
    int op;
    printf("The options are:\n1. is for insert at beginning\n2. is for traversing\n3. is for add at end\n4. is add at middle\n5. is for deletion\n6. to reverse the list\n7. to exit\n");
    while(1)
    {
	printf("Enter your choice:");
        scanf("%d",&op);
        if(op==1)
        {
            insertion();
        }
        else if(op==2)
        {
            traverse();
        }
        else if(op==3)
        {
            aae();
        }
        else if(op==4)
        {
            aam();
        }
	    else if(op==5)
	    {
		   deletion();
	    }
	    else if(op==6)
	    {
		  reverse();
	    }
        else if(op==7)
        {
            start=recurreverse();
        }
        else
        {
            break;
        }
    }
    return 0;
}