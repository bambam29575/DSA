#include <iostream>
using namespace std;
#define size 100

int stack[size], top = -1;
void push(int a)
{
    if(top == size-1)
    {
        cout << "stack overflow";
    }else
    {
        stack[++top] = a; 
    }
}
void pop()
{
    if(top == -1)
    {
        cout << "stack underflow";
    }
    else
    {
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "Stack empty";
    }
    else
    {
        cout << stack[top];    }
}

int main(){
  push(91);
  pop();
  push(19);
  peek();

  return 0;
}
