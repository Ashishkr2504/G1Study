#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int front,rear;
    int size;
    int *arr;
    public:
    Queue(int n)
    {
        front=-1;
        rear=-1;
        size=n;
        arr=new int[n];
    }
    
    ~Queue()
    {
        delete[] arr;
    }

    class QueueIsFullExcep : public exception
    {
        public:
        const char* what() const noexcept
        {
            return "Queue is Full !!";
        }
    };

     class QueueIsEmptyExcep : public exception
    {
        public:
        const char* what() const noexcept
        {
            return "Queue is Empty !!";
        }
    };

    bool isEmpty()
    {
        return front==-1 ;
    }

    bool isFull()
    {
        return ((rear+1)%size)==front;
    }

    void Enqueue(int a)
    {
        if(isFull())
        throw QueueIsFullExcep();
        else
        {
            if(isEmpty())
            {
                front++;
            }
            rear=(rear+1)%size;
            arr[rear]=a;
        }
    }

    int Dequeue()
    {
        int data;
        if(isEmpty())
        throw QueueIsEmptyExcep();
        else
        {
            data=arr[front];
            if(rear==front)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front=(front+1)%size;
            }
            return data;
        }
    }

    void Display()
    {
        if(isEmpty())
        throw QueueIsEmptyExcep();
        int i=front;
        while(i!=rear)
        {
            cout<<arr[i]<<" ";
            i=(i+1)%size;
        }
            cout<<arr[i];
    }
};
int main()
{
    Queue *q=new Queue(5);

    cout<<q->isEmpty();
    cout<<q->isFull();
    try{
    cout<<q->Dequeue();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    q->Enqueue(5);
    q->Enqueue(15);
    q->Enqueue(25);
    q->Enqueue(35);
    q->Enqueue(45);
    q->Display();
    cout<<q->isFull();
    try{
    q->Enqueue(55);
    }
    catch(Queue::QueueIsFullExcep &e)
    {
        cout<<e.what()<<endl;
    }
    try{
    cout<<q->Dequeue();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    try{
    cout<<q->Dequeue();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    try{
    cout<<q->Dequeue();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    try{
    cout<<q->Dequeue();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    try{
    cout<<q->Dequeue();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    try{
    q->Display();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    try{
    cout<<q->Dequeue();
    }
    catch(Queue::QueueIsEmptyExcep &e)
    {
        cout<<e.what()<<endl;
    }
    delete q;
}