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
Node* createLL()
{
    Node *h=new Node(1);
    h->next=new Node(1);
    h->next->next=new Node(2);
    h->next->next->next=new Node(3);
    h->next->next->next->next=new Node(3);
    h->next->next->next->next->next=new Node(5);
    h->next->next->next->next->next->next=new Node(5);
    return h;
}
void printLL(Node *h)
{
    while(h->next!=NULL)
    {
        cout<<h->data<<"->";
        h=h->next;
    }
        cout<<h->data<<endl;
}
Node* remDup(Node *h)
{
    if(h==NULL || h->next==NULL)
    return h;
    Node *oriH=h;
    Node *temp=h->next;
    int ele=h->data;
    while(temp!=NULL)
    {
        if(temp->data==ele)
        {
            if(temp->next==NULL)
            {
                h->next=NULL;
                return oriH;
            }
            temp=temp->next;
            h->next=temp;
        }
        else
        {
            h=temp;
            ele=h->data;
            temp=h->next;
        }
    }
    return oriH;
}
int main()
{
    Node *h=createLL();
    printLL(h);
    h=remDup(h);
    printLL(h);

}