//stack implentation WITH FUNCTION,WHILE LOOP,FOR LOOP,STAREMENTS IF,ELSE,SWITCH CASE,
#include<stdio.h>
#define MAXSIZE 5
 struct stack
 {
 	int stk[MAXSIZE];
 	int top;
 }s;
  
   void push();
   void pop();
   void display();
   void search();
    int main()
    {
    	int element,choice;
    	s.top=-1;
    	
    	while(1)
    	{
    		printf("**********STACK ORGANISATION*************\n|");
    		printf("1/push\n2.pop\n3.display\n4.search\n5.exit\n");
    		printf("*****************************************\n");
    		printf("enter ur choice\n");
    		scanf("%d",&choice);
    		
    		switch(choice)
    		{
    			case 1:push();
    			break;
    			case 2:pop();
    			break;
    			case 3:display();
    			break;
    			case 4:search();
    			break;
    			case 5:return 0;
			}
		}
	}
	void push()
	{
		int num;
		if(s.top==(MAXSIZE-1))
		{
			printf("erroe:overflow\n");
		}
		else
		{
			printf("enter the element to be pushed\n");
			scanf("%d",&num);
			s.top=s.top+1;
			s.stk[s.top]=num;
		}
	}
	
	 void pop()
	 {
	 	int num;
	 	if(s.top==-1)
	 	{
	 		printf("error:stack empty\n");
	 		
		 }
		 else
		 {
		 	num=s.stk[s.top];
		 	printf("poped element is=%d\n",num);
		 	s.top=s.top-1;
		 }
	 }
	  void display()
	  {
	  	int i;
	  	if(s.top==-1)
	  	{
	  		printf("error:stak empty\n");
		  }
		 else
		 {
		 	printf("\nitems in stack\n");
		 	for(i=s.top;i>=0;i--)
		 	{
		 		printf("%d\n",s.stk[i]);
			 }
		  } 
		  printf("\n\n");
	  }
	  void search()
	  {
	  	int i;
	  	int num;
	  	int counter=0;
	  	if(s.top==-1)
	  	{
	  		printf("error:stack in empty\n");
	  		
		  }
		  else
		  {
		  	printf("enter the element to be searched\n");
		  	scanf("%d", &num);
		  	for(i=s.top;i>=0;i--)
		  	{
		  		if(num==s.stk[i])
		  		{
		  			counter++;
		  			break;
				  }
			  }
			  if(counter>0)
			  {
			  	printf("element %d found in the stack\n",num);
			  	
			  }
			  else
			  {
			  	printf("element %d not found in d stack\n", num);
			  }
		  }
		  printf("\n");
		  
	  }
	  
