#include <iostream>
using namespace std;
#define size 100

int queue[size], front = -1, rear =-1 ;
void enque(int a)
{
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[++rear] = a;
    }
    else if(rear == size-1)
    {
        cout << "queue overflow";
    }
    else
    {
        queue[++rear] = a;
    }
}
void dequeue()
{
    if(front == rear)
    {
        cout << "queue underflow";
    }
    else
    {
        front++;
    }
}
void display()
{
    cout << queue[front];
}

int main(){
  enque(10);
  enque(20);
  dequeue();
  display();

  return 0;
}
