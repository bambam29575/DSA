#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int num)
    {
        this->data = num;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        cout << "Node has been deleted with data : " << value << endl;
    }
};
void insertNode(node *&tail, int element, int num)
{
    if (tail == NULL)
    {
        node *temp = new node(num);
        temp->next = temp;
        tail = temp;
    }
    else
    {

        node *current = tail;

        while (current->data != element)
        {
            current = current->next;
        }
        node *temp = new node(num);
        temp->next = current->next;
        current->next = temp;
    }
}
void print(node *&tail)
{
    node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;

    } while (temp != tail);
    cout << endl;
}
void deleteNode(node *&tail, int value) /*Why tail included ? because
 we need a pointer through which we can link other nodes*/
{
    if (tail == NULL)
    {
        cout << "LinkedList is empty" << endl;
        return;
    }
    else
    {
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        if (curr == prev)
        {
            tail = NULL;
        }

        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    // empty linked list
    node *tail = NULL;

    insertNode(tail, 2, 10);
    print(tail);

    insertNode(tail, 10, 20);
    print(tail);

    insertNode(tail, 20, 30);
    print(tail);

    insertNode(tail, 10, 40);
    print(tail);
    cout << tail << endl;

    deleteNode(tail, 10);
    print(tail);

    return 0;
}
