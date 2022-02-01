#include<stdio.h>

struct node
{
int data;
struct node* next;
};struct node* top;
int main()
{
int choice;
while(1)
{
printf("*****MENU*****\n");
printf("push\n");
printf("pop\n");
printf("display\n");
printf("search for an item\n");
printf("enter the users choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
        break;
case 2: pop();
        break;
case 3: display();
        break;
case 4:search();
        break;
case 5: exit(0);
        break;
default:printf("invalid choice");
}}
}
void push()
{
int item;
struct node* newnode;
printf("enter the value to be inserted\n");
scanf("%d",&item);
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->data=item;
if(top==NULL)
{
newnode->next=NULL;
}
else
newnode->next=top;
top=newnode;
printf("element inserted successfully");
}
void pop()
{
if(top==NULL)
printf("stack is empty");
else{
struct node* temp=top;
printf("deleted element",temp->data);
top=temp->next;
free(temp);
}
}
void search()
{

    int item;

    printf("enter the item to searched");
    scanf("%d",&item);
    struct node* temp;
    temp=top;

while(temp->data==item)
{
temp=temp->next;
printf("%d is present in the linked list",item);
}

}
void display()
{
if(top == NULL)
      printf("\nStack is Empty\n");

else
{
struct node* temp=top;
while(temp->next != NULL){
	 printf("%d",temp->data);
	 temp = temp->next;
	 }
      printf("%d",temp->data);
   }
}
