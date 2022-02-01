#include<stdio.h>
struct node
{
int data;
struct node* next;
};
struct node* head=NULL;
void main()
{
int choice;
while(1)
{printf("********MENU********\n");
printf("1.insertion at begining\n");
printf("2.insertion at end\n");
printf("3.insertion at specific position\n");
printf("4.deletion at begining\n");
printf("5.deletion at end\n");
printf("6.deletion at specific position\n");
printf("7.display");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:beginsert();
       break;
case 2:endinsert();
       break;
case 3:specinsert();
       break;
case 4:begdelete();
       break;
case 5:enddelete();
       break;
case 6:specdelete();
       break;
case 7:display();
       break;
case 8:exit(0);
       break;
default:printf("invalid choice");
}
}
}
void beginsert()
{
struct node *newnode,*temp=head;
int item;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{

 head=newnode;
    newnode->next=head;

}
else
{
    while(temp->next!=head)
    {

    temp=temp->next;
    }
temp->next=newnode;
newnode->next=head;
head=newnode;
printf("new node inserted at begining\n");
}
}
void endinsert()
{
struct node *newnode,*temp=head;
int item;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{

 head=newnode;
    newnode->next=head;

}
else
{
    while(temp->next!=head)
    {

    temp=temp->next;
    }
temp->next=newnode;
newnode->next=head;
printf("new node inserted at end\n");
}
}
void specinsert()
{
int pos,item,value;
struct node *newnode,*temp=head,*temp1,*temp2;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
    newnode->next=head;
    head=newnode;
}
else
{
    printf("enter the value after which you want to insert the node");
    scanf("%d",&value);
while(temp->next->data!=value)
{
temp=temp->next;
}
temp1=temp->next;
temp2=temp1->next;
temp1->next=newnode;
newnode->next=temp2;
printf("node inserted");
}
}
void begdelete()
{
struct node *temp=head,*temp1=head;
if(head==NULL)
printf("list is empty");
else
{


 while(temp->next!=head)
    {

    temp=temp->next;
    }
head=head->next;
temp->next=head;
free(temp1);
printf("first node is deleted");
}
}
void enddelete()
{
struct node*temp=head,*temp1;
    if(head==NULL)
    printf("list is empty");
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("delete last node");
    }
    else
    {
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=head;
    free(temp1);

    printf("deleted the last node");
}
}
void specdelete()
{
    int value;
    struct node *temp,*temp1,*temp2;
    printf("enter the value of the node to be deleted");
    scanf("%d",&value);
    temp=head;
    if(head==NULL)
    {
     printf("No elements in list to be deleted");
    }
    while(temp->next->data!=value)
    {
        temp=temp->next;
    }

    temp1=temp->next;
    temp2=temp1->next;
    free(temp1);
    temp->next=temp2;
    printf("node deleted ");
}
void display()
{

    struct node *temp;
    temp=head;
    if(temp==NULL)
    {

        printf("nothing to print");
    }
    else
    {

        printf("printing values\n");
        while(temp->next!=head)
        {

            printf("%3d",temp->data);
            temp=temp->next;
        }
        printf("%3d",temp->data);
    }
}
