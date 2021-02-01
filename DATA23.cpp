//singly 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* next;

};
int create(int);
int insertb(int);
 int insertend(int);
 void delb();
 void delend();
void display();

	 struct node* start;
      
     struct node* n_node;
     
int main()
{
int ch,t,a,b,num;
start=NULL;


while(1)
{  printf("(Enter your choice) \n");
   printf("___________________\n");
   printf("1.Create a list\n2.insert at begining\n3.Insert at end\n4.Display\n5.Delete the first element\n6.delete the last element\n7.Exit:-\n");
   printf("___________________\n");
   scanf("%d",&ch);
   
switch(ch)
{
	case 1: printf("enter the node value:\n");
			scanf("%d",&num);
	        t=create(num);
	        printf("__________________________________________________________\n");
	        printf("liked list is ->[%d]\n",t);
	        printf("__________________________________________________________\n");
			break;
			
	case 2: printf("enter the element to be insert at begining:\n");
	        scanf("%d",&num);
	        b=insertb(num);
	  		printf("__________________________________________________________\n");
	        printf("element inserted at the  begining of linked list is ->[%d]\n",b);
	        printf("__________________________________________________________\n");
	        break;
	        
    case  3: printf("enter the element to be insert at end:\n");
	        scanf("%d",&num);
	        b=insertend(num);
	  		printf("__________________________________________________________\n");
	        printf("element inserted at the  end of linked list is ->[%d]\n",b);
	        printf("__________________________________________________________\n");
	        break; 
	        
	        
	case 4:      
	        printf("__________________________________________________________\n");
	        display(); 
	        printf("\n");
	        printf("__________________________________________________________\n");
	       	break;
	
	case 5:  
	      
	  		printf("__________________________________________________________\n");
	        delb();
	        printf("\n");
	        printf("__________________________________________________________\n");
	        break; 
		    
	case 6: 
	  		printf("__________________________________________________________\n");
	         delend();
	         printf("\n");
	        printf("__________________________________________________________\n");
	        break; 
			break;	
	
	case 7: return 0;
	
	default :printf("error in program");
		 		   		            
}


}
 

}
  
int create(int a)
  {
  	n_node=(struct node*)malloc(sizeof(struct node));
  	n_node->info=a;
  	n_node->next=NULL;
  	start=n_node;
  	  
  	return (start->info);
 }

int insertb(int c)
  {
  	if(start==NULL)
  	  {
  		create(c);
	  }
	  
	  else
	  {
	   	n_node=(struct node*)malloc(sizeof(struct node));
  	 	n_node->info=c;
  		n_node->next=start;
  		start=n_node;
  	 	 
  		return (start->info);
	  }
  }
 
int insertend(int e)
 {
     struct node *n_node,* temp;
 	 n_node=(struct node*)malloc(sizeof(struct node));
 	  
 	    
   if(start==NULL)
 	{    start=n_node;
	     start->info=e;
	     start->next=NULL;
	     return start->info;
	}
	temp=start;
	  while(temp->next  != NULL)
	  temp=temp->next;
	  
	  temp->next=n_node;
	  n_node->info=e;
	  n_node->next=NULL;
	  
	  
	  return start->info;
	  
}
 	
void display()
 { struct node* r;
  
   if(n_node == NULL)
 	 {
 		printf("empty linked list:");
 		return;
	 }
	
	    printf("the linked list is:");
	    r=n_node;
	 	while(r!= NULL)
	   	 {   
	 		printf("->[%d]",r->info);
	    	r=r->next;
		 }
		 
		 //printf("%d\n",r->info);
		 return;
		 
		 
	 
 }
 void delb()
 {   
       
 	if(start==NULL)
 	{
      printf("empty list");
	 }
   int n = start->info;
    n_node= start->next;
   free(start);
   start = n_node;
   printf("%d deleted from beginning successfully.\n", n);
  
   
 }
 
 void delend()
 {  int k;
 	struct node* prev,*temp;
 	temp=start;

 	while(temp->next!=NULL)
 	{    
 		prev=temp;
 		temp=temp->next;
 		
	 }k=temp->info;
	 free(temp);
	 prev->next=NULL;
	 printf("the deleted element al last is %d",k);
 }
