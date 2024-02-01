#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *ptr, *head, *tail, *temp;
    char ch1, ch2;
    int count = 0, number;

void create (){
    cout <<"Enter yout first data" << endl;
    ptr = (struct node *) malloc(sizeof(struct node));
    cin >> ptr->data;
    head = ptr;
    tail = ptr;

    cout << "Do you want to create next node ? " << endl;
    cin >> ch1 ;
    while(ch1 == 'y'){
        count++;
        ptr = (struct node *) malloc(sizeof(struct node));
        cout << "Enter the data" << endl;
        cin >> ptr->data;
        cout << "Position?" <<endl;
        cin >> ch2;
        if(ch2 == 'h'){
            ptr->link = head;
            head = ptr;
        }
        else if(ch2 == 't'){
            tail->link = ptr;
            tail = ptr;
        }
        else if(ch2 == 'm'){
            cout << "Enter the position number : " ;
            cin >> number;
            temp = head;
            for(int i = 1; i < number-1; i++){
                temp = temp->link;
            }
            ptr->link = temp->link;
            temp->link = ptr;
        }else{
            cout << "Invalid Choice " << endl;
        }
        cout << "Do you want to create next node ? " << endl;
        cin >> ch1 ;

    }
    return;

}

void printLinkedlist(){
    temp = head;
    cout << "Linkedlist : ";
    for(int i = 1; i <= count+1; ++i){
        cout << temp->data<< " ";
        temp = temp->link;
    }
}

int main(){
    cout << "h for head, t for tail, m for middle, y for yes" << endl;
    create();
    printLinkedlist();

    return 0;
}
