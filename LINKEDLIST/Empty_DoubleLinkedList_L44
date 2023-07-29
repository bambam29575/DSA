#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int num)
    {
        this->data = num;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node()
    {
        int value = this->data;
        cout << "node is deleted with value :" << value << endl;
    }
};
void deleteNode(node *&head, node *&tail, int position)
{
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *current = head; /*current and early are used to define the position
         we want to delete and the previous node respectively
         node1 |__|, node2(early)|__|, node3(current)|__|, node4|__|*/
        node *early = head;

        int count = 1;
        while (count < position)
        {
            early = current;
            current = current->next;
            count++;
        }
        early->next->prev = current->prev;
        current->prev = NULL;
        early->next = current->next;
        current->next = NULL;
        delete current;
    }
}
void insertHead(node *&head, node *&tail, int num)
{
    if (head == NULL)
    {
        node *temp = new node(num);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(num);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertTail(node *&head, node *&tail, int num)
{
    if (tail == NULL)
    {

        node *temp = new node(num);
        head = temp;
        tail = temp;
    }
    else
    {

        node *temp = new node(num);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(node *&head, node *&tail, int num, int position)
{

    if (position == 1)
    {
        insertHead(head, tail, num);
        return;
    }
    node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertTail(head, tail, num);
        return;
    }
    node *nodeToInsert = new node(num);
    if (count == 1)
    {
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        nodeToInsert->prev = temp;
        temp->next = nodeToInsert;
    }
}
void print(node *&head)
{
    node *temp = head;

    while (temp != NULL) /*temp = temp->next . If temp->next is equal to null
     then temp = NULL*/
    {
        // cout << "kk" ;
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int len(node *&head)
{

    node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    /*In case of empty linked list*/
    node *head = NULL;
    node *tail = NULL;

    insertHead(head, tail, 10);
    print(head);

    insertTail(head, tail, 20);

    print(head);

    cout << head->next->prev << " " << head << endl;

    cout << "Length of LinkedList is : " << len(head) << endl;

    insertAtPosition(head, tail, 30, 3);
    print(head);
    cout << "Length of LinkedList is : " << len(head) << endl;

    insertAtPosition(head, tail, 68, 4);
    print(head);
    cout << "Length of LinkedList is : " << len(head) << endl;

    deleteNode(head, tail, 3);
    cout << "Length of LinkedList is : " << len(head) << endl;

    return 0;
}
