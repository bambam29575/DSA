// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class stack{
    public:
        int data;
        stack *link;
    };
stack *top, *bot, *temp, *head;

char ch, i, count=0;

void push();
void pop();
void peek();
void opr();

int main() {
    
  opr();
    return 0;
}
void opr(){
    cout << "opr" << endl;
    cin >> ch;
    if(ch == 'p'){
        pop();
    }else if(ch == 'i'){
        push();
    }else{
        peek();
    }
}
void push(){
    if (count == 0){
    top = new stack;
    bot = top;
    head = top;
    cout << "Data?" << endl;
    cin >> top->data;
    
    }
    else{
        top = new stack;
        cout << "Data?" << endl;
    cin >> top->data;
    bot->link = top;
    bot = top;
   
    }
    count++;
    opr();
    
    
}
void pop(){
    if (count == 0){
        cout << " underflow" << endl;
        opr();
    }else{
        i = 1;
        temp = head;
        while(i < count-1){
            temp = temp->link;
            i++;
        }
        temp->link = nullptr;
        top = temp;
        bot = temp;
    }
    opr();
}
void peek(){
    cout << top->data << endl;
    opr();
}
