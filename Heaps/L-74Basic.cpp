#include <iostream>
using namespace std;

class heap{
    public:
   int arr[100];
   int index;

   heap(){
    arr[0] = -1;
    index = 0;
   }

   void insertNode(int val)
   {
    index++;
    int size = index; /*we put index in size , so original value of index will not 
    chnage. Thats how ci=ondition for while loop can be set*/
    arr[index] = val;
    while(size > 1){
        int parent = size/2;
        if(arr[size] > arr[parent]){
            swap(arr[size] , arr[parent]);
            size = parent;/* It will make parent as size and then its ancestor will
            be parent */
        }
        else{
            return;
        }
    }
return;
   }
   void print(){
    int i = 1;
    while(i <= index){
        cout << i << " ";
        cout << arr[i] << endl;
        i++;
    }
}
};

int main()
{
    heap h;
    h.insertNode(10);
    h.insertNode(20);
    h.insertNode(30);
    h.insertNode(40);
    h.insertNode(50);
    h.insertNode(60);
    h.insertNode(70);
    h.insertNode(80);
    h.insertNode(90);

    h.print();

    return 0;
}
