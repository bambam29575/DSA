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
};
void insertHead(node *&head, int num)
{
    node *temp = new node(num);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertTail(node *&tail, int num)
{
    node *temp = new node(num);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(int position, int num, node *&head, node *&tail)
{

    if (position == 1)
    {
        insertHead(head, num);
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
        insertTail(tail, num);
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

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int len(node *&head)
{
    node *temp = head;
    int count = 0;

    while (temp != NULL)/*temp = temp->next . If temp->next is equal to null
    then temp = NULL*/
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);

    insertHead(head, 20);
    print(head);

    insertTail(tail, 30);
    print(head);
    cout << head->next->prev << " " << head << endl;

    cout << "Length of LinkedList is : " << len(head) << endl;

    insertAtPosition(4, 50, head, tail);
    print(head);
    cout << "Length of LinkedList is : " << len(head) << endl;

    return 0;
}
