#include<stdio.h>
#include<stdlib.h>


  
 struct node
{
	int info;
	struct node* next;

};
void create(int);
void insertbigin(int);
void insertend(int);
void display(int);
	 struct node* start;
     struct node* temp;
     struct node* n_node;
int main()
{
int ch,num;


start=NULL;
printf("enter your choice \n");
while(1){

printf("1.create a list\n2.insert at begining\n3.insert at end\n4.display\n5.exit:-\n");
scanf("%d",&ch);
switch(ch)
{
	case 1: create(num);
	          break;
	case 2: insertbigin(num);
	          break;
	case  3: insertend(num);
	           break;
	case 4:display(num);
	       			break;
	case 5:exit(1);
	
	default :printf("error in program");
		 		   		            
}


}
 

}
  
  
void create(int x)
{    
     int num,i,n;
     n_node=(struct node*)malloc(sizeof(struct node));
     printf("enter the total numbers of nodes:\n");
     scanf("%d",&n);
     for(i=1;i<n;i++)
     {
	 printf("enter the  %d node",i++);
	scanf("%d",&num);
	n_node->info=num;
	n_node->next=NULL;
	start=n_node;
	if(start==NULL)
	{
		start=n_node;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		
	}
	
	printf("list is->%d\n",start->info);
}
   void insertbigin(int x)
{  
     int num;
        if(start!=NULL)
	{   	//printf("list after insertion at begining\n->[%d]",start->info);
		n_node=(struct node*)malloc(sizeof(struct node));
		printf("enter the element to be insert at begining:-\n");
		scanf("%d",&num);
		n_node->info=num;
		n_node->next=NULL;
		start=n_node;
		 
		//
		//	n_node=(struct node*)malloc(sizeof(struct node));
 
  	}
	
	else
	{
		n_node=(struct node*)malloc(sizeof(struct node));
		printf("enter nn the element to be insert at begining:-\n");
		scanf("%d",&num);
		n_node->info=num;
		n_node->next=start->next;
		start=n_node;
	} 
	printf("list after insertion at begining\n->[%d]\n",start->info);
}
 
 
 
