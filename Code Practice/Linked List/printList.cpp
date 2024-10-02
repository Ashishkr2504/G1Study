#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
Node* createSample()
{
    Node *h=new Node(5);
    h->next=new Node(6);
    h->next->next=new Node(7);
    h->next->next->next=new Node(8);
    h->next->next->next->next=new Node(9);
    return h;
}
void printList(Node *h)
{
    while(h->next!=NULL)
    {
        cout<<h->data<<"->";
        h=h->next;
    }
        cout<<h->data;
}
int main()
{
    Node *h;
    h=createSample();
    printList(h);
}