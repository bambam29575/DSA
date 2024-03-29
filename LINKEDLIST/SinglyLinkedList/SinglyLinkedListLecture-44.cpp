#include <iostream>
using namespace std;

/*A linked list is a linear data structure, in which the elements
are not stored at contiguous memory locations. The elements in a
linked list are linked using pointers as shown in the below image:*/
class node
{
public:
    int data;
    node *next;
    node(int i) /*Parameterised constructor receives integer, finds
    out this(address) and put data in that address | Then set
    pointer block of its location to
     NULL*/
    {
        this->data = i;
        this->next = NULL;
    }
    // Destructor for dynamically created object
    ~node()
    {
        int value = this->data; /*Stored the value to show which node
         has been deleted*/
        cout << "Node with data : " << value << " deleted" << endl;
    }
};
// Head Insertion
void insertHead(node *&head, int num)
{
    node *temp = new node(num);
    temp->next = head;
    head = temp; /*Remember head has already been declared as node type
     and temp too, so can't declare it again*/
}
// Tail insertion
void insertTail(node *&tail, int num)
{
    node *temp = new node(num);
    tail->next = temp;
    tail = tail->next;
}
// Middle Insertion
void insertMiddle(node *&tail, node *&head, int position, int num)
{
    node *temp = head;
    int count = 1;

    if (position == 1)
    {
        insertHead(head, num);
        return; /*return keyword will lead to flow of control outside
         insertMiddle function and back to from where it was called*/
    }
    if (tail->next == NULL)
    {
        insertTail(tail, num);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
    }
    node *insertMiddleNode = new node(num);
    insertMiddleNode->next = temp->next;
    temp->next = insertMiddleNode;
}
// Deletion Of Node
void deleteNode(int position, node *&head)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp; /*For randomly created objects , delete keyword is
         used to call destructor*/
    }
    else
    {
        node *current = head;
        int cnt = 1;
        while (cnt < position)
        {
            current = current->next;
            cnt++;
        }

        current->next = NULL;
        delete current;
    }
}
// Print or Traverse Nodes
void print(node *&head) /*[my pov] Here (node *&head) receiving head which has
 address of node 1 | &head refers to the original head pointer. Head
 is a pointer as well as a node too. Just like arrays arr is pointer
 as well as array too*/
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    node *node1 = new node(58); /*node created dynamically, just
     like an object created dynamically | node(58) calls line 12*/
    /*node *node2 = new node(72);
    cout << node1->data << endl;
    cout << node1->next << endl;
    cout << node2->data << endl;
    cout << node2->next << endl;*/

    node *head = node1; /*head is a pointer stores address, the same address which is stored inside node1*/
    node *tail = node1; /*tail is a pointer stores adress , the same address which is stored inside node1 |
     means node1,head, tail pointing to same node */

    print(head);

    insertTail(tail, 68);
    // insertHead(tail, 68);
    print(head);

    insertTail(tail, 78);
    // insertHead(tail, 78);
    print(head);

    insertMiddle(tail, head, 4, 45);
    print(head);

    deleteNode(4, head); /*To delete node*/
    cout << head << " " << head->next << endl;
    cout << head->next->next << endl; /*head's next (2nd node) , again
     2nd node's next (third node)*/
    cout << "Head " << head->data << endl;
    cout << "tail ``" << tail->data << endl;

    return 0;
}
