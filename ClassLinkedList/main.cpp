#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class LinkedList {
private:
    Node *first;

public:
    LinkedList() {
        first = NULL;
    }

    LinkedList(int A[], int n);

    ~LinkedList();

    void Display();

    void Insert(Node *p,int index, int x);

    int Delete(Node *p, int index);

    int Length();

};

LinkedList ::LinkedList(int A[], int n)
{
    int i;
    Node *t, *last;

    first = new Node;

    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

LinkedList :: ~LinkedList() {
    Node *p = first;

    while(first){
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList ::Display() {
    Node *p = first;

    while(p)
    {
        cout << p->data<<" ";
        p = p->next;
    }
}

void LinkedList ::Insert(Node *p,int index, int x) {
    Node *t;

    if(index < 0 || index > Length())
        return;

    t = new Node;
    t->data  = x;

    if(index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index; ++i) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int LinkedList ::Delete(Node *p, int index) {
    Node *q;
    int x = -1;

    if(index < 1 || index > Length())
        return -1;

    if(index == 1)
    {
        p = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }

    else
    {
        for (int i = 0; i < index-1; i++) {
            q = p;
            p = p->next
        }
    }
}

int main() {

    return 0;
}
