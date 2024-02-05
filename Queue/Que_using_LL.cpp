// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class que{
    public:
        int data;
        que *link;
    };
que *rear, *ptr, *temp, *front;

int i, count=0;
char ch;

void enq();
void deq();
void display();
void opr();

int main() {
    
  opr();
    return 0;
}
void opr(){
    cout << "opr" << endl;
    cin >> ch;
    if(ch == 'e'){
        enq();
    }else if(ch == 'd'){
        deq();
    }else{
        display();
    }
}
void enq(){
    if (count == 0){
        ptr = new que;
    cout << "item" << endl;
    cin >> ptr->data;
    front = ptr;
    rear = ptr;
    
    }else{
        ptr = new que;
    cout << "item" << endl;
    cin >> ptr->data;
    rear->link = ptr;
    rear = ptr;
    }
    count++;
    opr();
    
    
}
void deq(){
    cout << front->data << endl;
    if(count == 0 ){
        cout << "Empty" << endl;
    }else{
        front = front->link;
    }
    count--;
    opr();
}
void display(){
    i = 1;
    temp = front;
    while(i <= count){
        cout << temp->data << " ";
        temp = temp->link;
        i++;
    }
    opr();
}
