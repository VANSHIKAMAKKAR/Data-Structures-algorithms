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
	  struct node *newnode;
	  newnode=(struct node*)malloc(sizeof(struct node));
	  scanf("%d",&item);
	  newnode->info=item;
	  newnode->link=NULL;
	  if(start==NULL)
	  {
	  	start=newnode;
	  }			
	  else
	  {
	    ptr=start;
	    while(ptr->link!=NULL)
	    {
	  	ptr=ptr->link;
	    }
	    ptr->link=newnode;
	    }
	  }//insertion at end//
	  else if(option==3)
	  {
	  	int inst;
	  	scanf("%d",&inst);
	  	scanf("%d",&item);
	    struct node *newnode;
	    newnode=(struct node*)malloc(sizeof(struct node));
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
	  			ptt=ptt->link;
	  		}
	  	}
	  	newnode->info=item;
	  	newnode->link=loc->link;
	  	loc->link=newnode;
	  	//insertion in between//
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
	  }
	  else if(option==5)
	  {

	  	int inst;
	  	scanf("%d",&inst);
        struct node *ptt;
        struct node *loc;
        struct node *locp;
        struct node *save;
	  	if(start==NULL)
	  	{
	  		loc=NULL;
	  		locp=NULL;
	  	}
	  	else if(start->info==inst)
	  	{
	  		locp=NULL;
	  		loc=start;
	  	}
	  	else
	  	{
            ptt=start;
            while(ptt!=NULL)
            {
            	if(ptt->info==inst)
            	{
            		loc=ptt;
            		locp=save;
            		break;
            	}
            	else
            	{
            		save=ptt;
            		ptt=ptt->link;
            	}
            }
	  	}
	  	locp->link=loc->link;
	  	free(loc);
	  }
	}
	}