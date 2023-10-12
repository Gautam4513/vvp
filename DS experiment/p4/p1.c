/*Write a program to implement Queue Sort*/
#include<stdio.h>
#include<stdlib.h>
struct queue
{
  int size;
  int f;
  int r;
  int *arr;

};
int isempty();
int isfull();
void enqueue(struct queue *q);
void dqueue(struct queue *q);
int main()
{
  int n;
  struct queue q;
  q.f=q.r=-1;
  printf("enter a size of queue : ");
  scanf("%d",&q.size);
  q.arr=(int*)malloc(q.size*sizeof(int));
  start:
  printf("\n1-enqueue\n2-dqueue\n3-exit\n");
  scanf("%d",&n);
  switch (n)
  {
  case 1:
    enqueue(&q);
    break;
  case 2:
    dqueue(&q);
    break;
  case 3:
    goto exit;
    break;
  default:
    printf("\nenter posibal value");
    break;
  }
  goto start;
  exit:
  return 0;
}
int isempty(struct queue *q)
{
  if(q->r==q->f) return 1;
  else return 0;

}
int isfull(struct queue *q)
{
  if(q->r==q->size-1) return 1;
  else return 0;
}
void enqueue(struct queue *q)
{
  int val;
  if(isfull(q))
  {
    printf("\nqueue is full");
  }
  else
  {
    printf("enter a eliment you want to stor : ");
    scanf("%d",&val);
    q->r++;
    q->arr[q->r]=val;
  }
}
void dqueue(struct queue *q)
{
  int a=-1;

  if(isempty(q))
  {
    printf("\nqueue is empty");
    return;
  }
  else{
    q->f++;
    a=q->arr[q->f];
    printf("\n\n%d is dequeue",a);
    return;
  }
}