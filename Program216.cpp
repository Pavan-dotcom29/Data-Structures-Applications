#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Queue     // Singly Linear Linked List
{
private:
    PNODE first;
    int size;
    
public:
    Queue()
    {
        first = NULL;
        size = 0;
    }
    
    void Enqueue(int no)   // InsertLast()
    {
        PNODE newn=new node;
        newn->data=no;
        newn->next=NULL;
    }

    if(size==0)
    {
        first=newn;
    }
    else
    {
        PNODE temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    size++;
}
    int Dequeue()   // DeleteFirst()
    {
        int no = 0;
        PNODE temp = first;
        
        if(size == 0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        
        if(size == 1)
        {
            no = first->data;
            delete first;
            first = NULL;
        }
        else
        {
            no = first->data;
            first = first -> next;
            delete temp;
        }
        
        size--;
        return no;
        // Logic
    }
    
    
    void Display()
    {

    }
    
    int Count()
    {
        return size;
    }
};

int main()
{
    Queue obj;
    
    obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(101);
   
    cout<<"elements are quene :|\n";
    obj.display()
    
    int iret = obj.Dequeue();
    cout<<"removed elements from quene "<<iret<<"\n";       // 11
    cout<<iret;                     // 11
    
    obj.Display();          // 11       21          51
    iret = obj.Count();     // 3
    
    cout<<"Size of queue is : "<<iret<<"\n";        // 3
    
    return 0;
}
