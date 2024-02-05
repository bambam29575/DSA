// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX 4

int queue[MAX], front = -1, rear = -1, item, i;
char ch;

void enq();
void deq();
void dis();
void opr();

int main() {
    opr();
    return 0;
}

void opr(){
    cout << "opr" << endl;
    cin >> ch;
    if (ch == 'e'){
        enq();
    }else if(ch == 'd'){
        deq();
    }else{
        dis();
    }
}

void enq(){
    if(front == -1 && rear == -1){
        front = rear = 0;
        cout << "Item" << endl;
        cin >> queue[rear];
    }else{
        if((rear+1)%MAX == front){
            cout << "full" << endl;
        }else{
            cout << "Item" << endl;
            rear = (rear+1)%MAX;
            cin >> queue[rear];
        }
        
    }
    opr();
}
void deq(){
    if(front == -1 && rear == -1){
        cout << "empty" << endl;
    }else if (front == rear){
        front = rear = -1;
    }else{
        front = (front+1)%MAX;
    }
    opr();
}
void dis(){
    i = front;
    while(i != (rear+1)%MAX){
        cout << queue[i] << " ";
        i = (i+1)%MAX;
    }
    cout << endl;
    opr();
}
