#include<stdio.h>
	#include<stdlib.h>
	struct node
	{
		int data;
		struct node *next;
	};
    int main()
	{
		int option;
		int item;
		struct node *last=NULL;
		struct node *ptr=NULL;
	   while(1)
	   {
	   	scanf("%d",&option);
	   	if(option==1)
	   	{
	      scanf("%d",&item);
          struct node *newnode=(struct node*)malloc(sizeof(struct node));
          newnode->data=item;
          if(last==NULL)
          {
          	last=newnode;
          	last->next=last;
          }
          else
          {
          	newnode->next=last->next;
          	last->next=newnode;
          }
	   	}
	   	else if(option==2)
	   	{
	   		scanf("%d",&item);
	   	  struct node *newnode=(struct node*)malloc(sizeof(struct node));
          newnode->data=item;
          newnode->next=last->next;
          last->next=newnode;
          last=newnode;
        }
        else if(option==3)
        {
        	scanf("%d",&item);
          struct node *newnode=(struct node*)malloc(sizeof(struct node));
          newnode->data=item;
          int inst;
          scanf("%d",&inst);
          struct node *ptt;
          struct node *loc;
          ptt=last->next;
         while(ptt!=last)
	  	{
	  		if(ptt->data==inst)
	  		{
               loc=ptt;
               break;
            }
	  		else
	  		{
	  			ptt=ptt->next;
	  		}
	  	}
	  	newnode->next=loc->next;
	  	loc->next=newnode;
        }
        else if(option==4)
        {
        	struct node *pt=last->next;
        	while(pt!=last)
        	{
        		printf("%d ",pt->data);
        		pt=pt->next;
        	}
        	printf("%d ",last->data);
        }
        else if(option==5)
        {
        	int ins;
        scanf("%d",&ins);
        struct node *ptt;
        struct node *pt=last->next;
        struct node *loc;
        struct node *locp;
        struct node *save;
	  	if(last==NULL)
	  	{
	  		loc=NULL;
	  		locp=NULL;
	  	}
	  	else if(pt->data==ins)
	  	{
	  		locp=NULL;
	  		loc=pt;
	  		last->next=loc->next;
	  		free(loc);
	  	}
	  	else if(last->data==ins)
	  	{
	  		loc=last;
	  		struct node *pt1=last->next;
	  		while(pt1!=last)
	  		{
	  			locp=pt1;
	  			pt1=pt1->next;
	  		}
	  		locp->next=loc->next;
	  		last=locp;
	  		free(loc);
	  	}
	  	else
	  	{
            ptt=pt;
            while(ptt!=last)
            {
            	if(ptt->data==ins)
            	{
            		loc=ptt;
            		locp=save;
            		break;
            	}
            	else
            	{
            		save=ptt;
            		ptt=ptt->next;
            	}
            }
	  	locp->next=loc->next;
	  	free(loc);
	    }
        }
    }
    return 0;
}