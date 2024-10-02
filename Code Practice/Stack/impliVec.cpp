#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    vector<int> elements{5};

    public:

    class stackEmptyException : public exception
    {
        public:
        const char* what() const noexcept
        {
            return "Stack is empty...";
        } 
    };
    
    class stackFullException : public exception
    {
        public:
        const char* what() const noexcept
        {
            return "Stack is full...";
        } 
    };

    void push(int val)
    {
        if(elements.size()==5)
            
        
    }

};