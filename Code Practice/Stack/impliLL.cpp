#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int val)
        {
            data = val;
            next = NULL;
        }
    };

    class StackEmptyException : public exception
    {
    public:
        const char *what() const noexcept
        {
            return "No element to pop !!!";
        }
    };

private:
    Node *h;

public:
    Stack()
    {
        h = NULL;
    }

    int pop()
    {
        if (isEmpty())
            throw StackEmptyException();

        Node *temp = h;
        int val = h->data;
        h = h->next;
        delete temp;
        return val;
    }

    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = h;
        h = temp;
    }
    bool isEmpty()
    {
        return h == NULL;
    }

    void peek()
    {
        if (h != NULL)
            cout << h->data << endl;
        else
            cout << "Stack is empty" << endl;
    }
};
int main()
{
    Stack s;
    // s.pop();
    try
    {
        cout << s.pop();
    }
    catch (Stack::StackEmptyException &e) 
    {
        cout << e.what() << endl; 
    }
    s.peek();
    s.push(25);
    s.push(5);
    s.peek();
    s.peek();
    s.push(15);
}
