/*circular queue*/
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
  if(q->r==-1&&q->f==-1) return 1;
  else return 0;

}
int isfull(struct queue *q)
{
  if((q->r+1)%(q->size)==(q->f)) return 1;
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
    printf("enter an element you want to store : ");
    scanf("%d",&val);
    if(q->r==-1)
    {
      q->r++;
      q->f++;
    }
    else{
      q->r=(q->r+1)%(q->size);
    }
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
     a=q->arr[q->f];
     if(q->f==q->r){
      q->f=q->r=-1;
     }
     else{
q->f= (q->f+1)%q->size;
     }
   
       
     
    printf("\n\n%d is dequeue",a);
    return;
  }
}