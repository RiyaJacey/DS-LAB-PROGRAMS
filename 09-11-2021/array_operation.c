#include<stdio.h>
int main()
{
 int a[20],i,n,c,pos,item,cont;
 printf("enter number of elements required\n");
 scanf("%d",&n);
 printf("enter the elements into the array\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    while(1)
    {
    printf("menu:\n");
    printf("1.insertion at the end\n");
    printf("2.deletion from the end\n");
    printf("3.searching\n");
    printf("4.traversal\n");
    printf("enter the users choice\n");
    scanf("%d",&c);
      switch(c)
        {
         case 1:pos=n+1;
                printf("insertion at the end\n");
                printf("enter the elements to be inserted\n");
                scanf("%d",&item);
                //for(i=n-1;i>=pos-1;i--)

                a[pos-1]=item;
                printf("new array is\n");
                for(i=0;i<=n;i++)
                printf("%d",a[i]);
                break;
         case 2:
                printf("deletion from the end\n");
                printf("enter the position you want to delete the element\n");
                scanf("%d",&pos);
                for(i=pos-1;i<n-1;i++)
                a[i]=a[i+1];
                printf("the new array is:\n");
                for(i=0;i<n-1;i++)
                  {printf("%d",a[i]);
                   }
                break;
        case 3:
               printf("searching for an element\n");
               printf("enter the element to be searched\n");
               scanf("%d",&item);
                 for(i=0;i<n;i++)
                  {
                  if(a[i]==item)
                  {
                   printf("element found at %d position\n",i);
                    break;
                  }
                  }
                break;
       case 4:
           printf("traversal of the array\n");
           for(i=0;i<n;i++)
             {
              printf("%3d",a[i]);
             }
           break;
           case 0:exit(0);
        default:printf("invalid choice");
            }
    }}
