#include<stdio.h>  // insert, delete and display
#define max 10
int insert(int[],int, int);
int del(int[],int,int);
void display(int[],int,int);

int main()
{
 int queue[max],front=-1,rear =-1, ch;
do
{
printf(" \n Menu \n 1 Insert  \n 2 Serve  \n 3 Display  \n 4 exit ");  // Menu
printf("\n Enter your choice ");
scanf("%d",&ch);
switch(ch)
{
    case 1:
            rear = insert( queue, front, rear);
            if(front == -1){
            front++;
        }
    break;

    case 2:
          front = del(queue , front, rear);
  break;
    case 3:
            display( queue , front, rear);
  break;


}
} while(ch!=4);
}
int insert(int queue[],int front, int rear){
    if((rear+1)%max == front){
        return rear;
    }
    else{
        int element;
        scanf("%d",&element);
        rear = (rear+1)%max;
        queue[rear] = element;

    }

    return rear;

}
int del(int queue[],int front,int rear){
    if(front == -1){
        printf("Queue is empty");

    }
    if(front == rear){
        front = -1;
        rear = -1;

    }
    else{
        printf("%d",queue[front]);
        front = (front+1)%max;
    }
    return front;
}
void display(int queue[],int front,int rear){
    if(front == -1){
        printf("Queue is empty");
        return;
    }
    int temp = front;
    while(temp != rear){  //else
        printf("%d ", queue[temp] );
        temp = (temp+1)%max;
    }
    printf("%d", queue[temp]);
    return;
}
