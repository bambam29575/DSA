#include <iostream>
using namespace std;


class node {
    public:
    int data;
    node *link;
    node *link2;
};
node *ptr, *tail, *head, *temp, *prev, *next, *cur;
char ch, ch2;
int pos, i, count = 0;

void display();
void insert();
void del();
void oper();
void reverseLL();

int main(){
    cout <<"1 st node"<< endl;
    ptr = new node;
    cin >> ptr->data;
    tail = ptr;
    head = ptr;
   
    
    oper();
    return 0;
}

void display(){
    temp = head;
    i = 1;
    while(i <=  count+1){
        cout << temp->data << " ";
        temp = temp->link;
        i++;
    }
    cout << endl;
    oper();
}

void insert(){
    cout << "New node?" <<endl;
    cin >> ch;
    
    while(ch == 'y'){
       ptr = new node;
       cout << "Enter data" << endl;
       cin >> ptr->data;
       count ++;
       cout << "Where" << endl;
    
       cin >> ch2;
       if (ch2 == 'h'){
           ptr->link = head;
           head->link2 = ptr;
           head = ptr;
       }else if(ch2 == 'm'){
           temp = head;
           cout << "position" << endl;
           cin >> pos;
           i = 1;
           while(i < pos-1 ){
               temp = temp->link;
               i++;
           }
           ptr->link = temp->link;
           ptr->link2 = temp;
           temp->link = ptr;
           temp=ptr->link;
           temp->link2 = ptr;
           
       }
       else{
           tail->link = ptr;
           ptr->link2 = tail;
           tail = ptr;
       }
       cout << "Want to create next node?" << endl;
       cin >> ch;
    }
 oper();
}

void oper(){
    cout << "action" << endl;
    cin >> ch;
    if(ch == 'd'){
        del();
    }else if(ch == 'i'){
        insert();
    }else if(ch == 's'){
        display();
    }
    else if(ch == 'r'){
        reverseLL();
    
    }else{
        cout << "invalid" << endl;
    }
}

void del(){
    count--;
    cout << "Node position" << endl;
    cin >> ch;
    if (ch == 'h'){
       temp = head;
       head = temp->link;
       temp->link = nullptr;
    }else if(ch == 'm'){
        cout << "position" << endl;
        cin >> pos;
        i = 1;
        temp = head;
        while(i < pos){
            if(i == pos-1){
                temp->link = temp->link->link;
            }
            temp = temp->link;
            i++;
        }
        temp->link = nullptr;
    }else{
        i =1;
        temp = head;
        while(i < count-1){
            tail = temp;
            tail->link = nullptr;
        }
    }
    oper();
}

void reverseLL(){
    tail = head;
    ::cur= head->link;
    ::next = ::cur->link;
    head->link = nullptr;
    while(::cur != nullptr){
        ::cur->link = head;
        head = ::cur;
        ::cur = ::next;
        if(::next != nullptr){
        ::next = ::next->link;
        }
    }
    oper();

}
