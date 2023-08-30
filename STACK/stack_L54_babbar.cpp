#include <iostream>
using namespace std;


/*STACK IMPLEMENTATION THROUGH ARRAY*/
class stack{
   public:
   int size;
   int *arr;
   int top;

   stack(int size){
    this->size =  size;
    arr = new int[size];
    top = -1;
   }

   void push(int element){
    if ( size-top > 1){ /*because top max value can be size-1 because it started from 0 and size starts from 1 by default*/
        top++;
        arr[top] = element;
    }else{
        cout << "Stack overflow" << endl;
    }
   }
   void pop(){
    if(top >= 0){
        top--;
    }else{
        cout << "stack underflow" << endl;
    }
   }
   void peek(){
    if(top >= 0){
        cout << arr[top] << endl;
    }else{
        cout << "Stack is empty" << endl;
    }
   }
   bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
   }
   void num(){
    cout << "Size of array : " << top+1 << endl;
   }
};

int main() {
    stack st(4);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.peek();
    st.num();

    st.pop();
    st.peek();
    st.num();

    st.pop();
    st.peek();
    st.num();

    st.pop();
    st.peek();
    st.num();

    st.pop();
    st.peek();
    st.num();

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack has elements" << endl;
    }

    


    return 0;
}
