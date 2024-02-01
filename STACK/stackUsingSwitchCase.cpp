// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define size 100

int stack[size], top = -1, item, input;


void operate();
void pop();
void push();
void peek();

int main() {
    operate();
   
    return 0;
}

void operate(){
    cout << "Pop 1, push 2, peek 3 exit 4" <<endl;
    cin >> input;
    switch(input)
    {
        case 1:
        pop();
        break;
        
        case 2:
        push();
        break;
        
        case 3:
        peek();
        break;
        
        case 4:
        cout << "exited successfully" << endl;
        break;
        
        default:
        cout << "Invalid input" << endl;
        break;
    }
}
 void pop(){
     if(top == -1){
         cout << "Stack underflow" << endl;
         operate();
         return;
     }
     stack[top--] = '\0';
     operate();
 }
void push(){
    cout << "Item?" << endl;
    cin >> item;
    if(top >= size){
        cout << "Stack overflow" << endl;
        operate();
        return;
    }
    stack[top++] = item;
    operate();
}
void peek(){
    cout << stack[top] << endl;
}
