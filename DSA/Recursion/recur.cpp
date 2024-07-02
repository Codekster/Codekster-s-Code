#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;
    Node(int data = 0, Node *Next = NULL)
    {
        this->data = data;
        this->Next = Next;
    }
    void Display()
    {
        cout << "[ " << data << " ] ";
    }
};
Node *CreateNode(int n)
{
    if (n == 0)
        return NULL;
    int data;
    cout << "Enter the Data of Node : ";
    cin >> data;

    return new Node(data, CreateNode(n - 1));
}

void Display(Node *Head)
{
    while (Head != NULL)
    {
        Head->Display();
        Head = Head->Next;
    }
    cout << endl;
}

int main()
{
    Node *Head = NULL;

    int n;
    cout << "Enter the number of Nodes to create : ";
    cin >> n;

    Head = CreateNode(n);

    Display(Head);
}