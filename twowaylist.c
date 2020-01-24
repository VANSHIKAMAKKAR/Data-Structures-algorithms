#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int info;
		struct node *back;
		struct node *forw;
	};
	int main()
	{
		int option;
		int item;
		struct node *start=NULL;
		struct node *ptr=NULL;
	   while(1)
	   {
	  scanf("%d",&option);
	  if(option==1)
	  {
	  struct node *newnode;
	  newnode=(struct node*)malloc(sizeof(struct node));
	  scanf("%d",&item);
	  newnode->info=item;
	  if(start==NULL)
	  {
        newnode->back=NULL;
        newnode->forw=NULL;
        start=newnode;
	  }
	  else
	  {
	  newnode->back=NULL;
	  newnode->forw=start;
      start->back=newnode;
      start=newnode;
      }
      //insertion at beginning//
	  }
	  else if(option==2)
	  {
	    struct node *newnode;
	    newnode=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&item);
	    newnode->info=item;
        ptr=start;
        while(ptr->forw!=NULL)
        {
       	 ptr=ptr->forw;
        }
        newnode->back=ptr;
        newnode->forw=NULL;
        ptr->forw=newnode;
        //insertion at end//
	  }
	  else if(option==3)
	  {
	  	int inst;
	  	scanf("%d",&inst);
	  	struct node *newnode;
	  	struct node *ptt;
	  	struct node *loc;
	  	ptt=start;
	    newnode=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&item);
	    newnode->info=item;
	    while(ptt->forw!=NULL)
	  	{
	  		if(ptt->info==inst)
	  		{
               loc=ptt;
               break;
            }
	  		else
	  		{
	  			ptt=ptt->forw;
	  		}
	  	}
	  	newnode->back=loc;
        newnode->forw=loc->forw;
        loc->forw=newnode;
        (newnode->forw)->back=newnode;
        //insertion in between//
	  }
	  else if(option==4)
	  {
        int inst;
	  	scanf("%d",&inst);
	  	struct node *ptt;
	  	struct node *loc;
	  	ptt=start;
	  	while(ptt!=NULL)
	  	{
	  		if(ptt->info==inst)
	  		{
               loc=ptt;
               break;
            }
	  		else
	  		{
	  			ptt=ptt->forw;
	  		}
	  	}
	  	
	  	if(loc->back==NULL)
	  	{
	  		start=loc->forw;
	  		(loc->forw)->back=NULL;
            free(loc);
	  	}
	  	else if(loc->forw==NULL)
	  	{
	  		(loc->back)->forw=loc->forw;
	  		free(loc);
	  	}
	  	else
	  	{
	  		(loc->back)->forw=loc->forw;
	  		(loc->forw)->back=loc->back;
	  		free(loc);
	  	}
	  }
	  else if(option==5)
	  {
	  	struct node *pt;
	  	pt=start;
	  	while(pt->forw!=NULL)
	  	{
	  		printf("%d ",pt->info);
	  		pt=pt->forw;
	  	}
	  	printf("%d ",pt->info);
	  }
	   }
	   return 0;
	}