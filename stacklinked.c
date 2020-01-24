#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int info;
		struct node *link;
	};
int main()
{
	int option;
	int item;
	struct node *start=NULL;
	struct node *ptr=NULL;
	while(1)
	{
		printf("Press 1 for push\n");
		printf("Press 2 for pop\n");
		printf("Press 3 for peak\n");
		printf("Press 4 for printing whole stack\n");
		scanf("%d",&option);
		if(option==1)
		{
        struct node *newnode;
	    newnode=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&item);
	    newnode->info=item;
	    newnode->link=start;
	    start=newnode;//insertion at start//
		}
		else if(option==2)
		{
			struct node *loc;
			printf("%d\n",start->info);
	  		loc=start;
			start=start->link;
	  	    free(loc);
		}
		else if(option==3)
		{
			printf("%d\n",start->info);
		}
		else if(option==4)
		{
			struct node *pt;
			pt=start;
			while(pt!=NULL)
			{
				printf("%d ",pt->info);
				pt=pt->link;
			}
			printf("\n");
		}
	}
}