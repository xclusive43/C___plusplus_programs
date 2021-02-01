 #include<stdio.h>
 #include<stdlib.h>
 struct node{
 	int data;
 	struct node* link;
 };
 int main()
 {
 	struct node* root =NULL;
 	struct node* temp;
 	for(int i=0;i<5;i++){
	 
	 temp=(struct node*)malloc(sizeof(struct node));
 	scanf("%d",&temp->data);
 	temp->link=NULL;
 	if(root==NULL){
	root=temp;
		}
 else
 { struct node* p;
   p=root;
   {
   	while(p->link !=NULL)
   	{
   		p=p->link;
	   }
	   p->link=temp;
   }
 	//p=(struct node)malloc(sizeof(struct node));
 }
} 
printf("the linked list is:-");
 while(root!=NULL){
 
 printf("[%d]->",root->data);
 root=root->link;
 }
 printf("\n");
 }
