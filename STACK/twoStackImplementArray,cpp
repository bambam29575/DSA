#include <iostream>
using namespace std;

class twoStack{
    public:
    int top1;
    int top2;
    int *arr;
    int size;

    twoStack(int s){
    this->size = s;
    top1 = -1;
    top2 = s;
    arr = new int[s];
}
void push1(int num){
    if (top2 - top1 > 1) {
        top1++;
        arr[top1] = num;
        }
}
void push2(int num){
    if (top2 - top1 > 1) {
        top2--;
        arr[top2] = num;
        }
}
int pop1(){
    if (top1 >= 0) {
        int ans = arr[top1];
        top1--;
        return ans;
    } else {
        return -1;
        }
}
int pop2(){
    if (top2 < size) {
        int ans = arr[top2];
        top2++;
        return ans;
    } else {
        return -1;
        }
    }
    void peek1(){
        if(top1 >= 0){
            cout << arr[top1] << endl;
        }
    }
    void peek2(){
        if(top2 < size){
            cout << arr[top2] << endl;
        }
    }
};

int main() {
    twoStack st(5);
    st.push1(10);
    st.peek1();

    st.push1(20);
    st.peek1();

    st.push1(30);
    st.peek1();

    cout << "popped element : "<<st.pop1() << endl;
    st.peek1();

    st.push2(50);
    st.peek2();

    st.push2(40);
    st.peek2();

    cout << "popped element : " <<st.pop2() << endl;
    st.peek2();
}
