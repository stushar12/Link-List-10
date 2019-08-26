#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
    struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
  char str1[10];
  printf("\n Enter yes or no\n");
  scanf("%s",str1);
  if(strcmp(str1,"no")==0)
  break;
  else
  {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter a value ");
  scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
      start=temp;
      p=temp;
      q=temp;
    }
    else
    {
      p->next=temp;
      p=temp;

    }
  }
}
return q;
}
struct node *merge(struct node *p,struct node *q)
{
  struct node *temp=p;
  while(p->next!=NULL)
  {

    p=p->next;
  }
  p->next=q;
  return temp;
}
void display(struct node *p)
{
  while(p!=NULL)
  {
    printf("%d",p->data);
    p=p->next;
  }
}
  int main()
  {
    struct node *p,*q,*r;
    p=create();
    q=create();
    r=merge(p,q);
    display(r);
  }
