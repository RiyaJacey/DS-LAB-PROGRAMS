#include<stdio.h>
struct node
{
int data;
struct node* next;
};
struct node* head;
void main()
{
int choice=0;
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
struct node* newnode;
int item;
newnode=(struct node*)malloc(sizeof(struct node*));
if(newnode==NULL)
printf("overflow\n");
else
{
printf("enter the item\n");
scanf("%d",&item);
newnode->data=item;
newnode->next=head;
head=newnode;
printf("new node inserted at begening\n");
}
}
void endinsert()
{
struct node*newnode,*temp;
int item;
newnode=(struct node*)malloc(sizeof(struct node*));
if(newnode==NULL)
printf("overflow\n");
else
{
printf("enter the item to be inserted\n");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
printf("node is inserted\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=NULL;
printf("node inserted at the end\n");
}}

}
void specinsert()
{
int pos,item;
struct node*newnode,*temp=head;
newnode=(struct node*)malloc(sizeof(struct node*));
if(newnode==NULL)
printf("overflow\n");
else
{
printf("enter the item\n");
scanf("%d",&item);
newnode->data=item;
printf("enter the location");
scanf("%d",&pos);
if(pos==1)
{
    newnode->next=temp;
    head=newnode;
    return;
}
for(int i=1;i<pos-1;i++)

temp=temp->next;

newnode->next=temp->next;
temp->next=newnode;
printf("node inserted");
}
}
void begdelete()
{
struct node*temp;
if(head==NULL)
printf("list is empty");
else
{
temp=head;
head=temp->next;
free(temp);
printf("last node is deleted");
}
}
void enddelete()
{
struct node*temp,*temp1;
    if(head==NULL)
    printf("list is empty");
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("delete last node");
    }
    else
        temp=head;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    printf("deleted the last node");
}
void specdelete()
{
    struct node *temp,*temp1;
    int loc,i;


    printf("enter the location");
    scanf("%d",&loc);
    temp=head;
    for(int i=0;i<loc;i++)
    {

        temp1=temp;
        temp=temp->next;
        if(temp==NULL)
        {

            printf("cant delete");
            return;
        }
    }
    temp1->next=temp->next;
    free(temp);
    printf("deleted node is %d",loc+1);
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
        while(temp!=NULL)
        {

            printf("%3d",temp->data);
            temp=temp->next;
        }
    }
}
