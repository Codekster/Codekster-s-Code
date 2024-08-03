#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int info;
	node *next;
	node(int a)
	{
		info = a;
		next = NULL;
	}
};

void insertAtHead(node *&head, int info)

{
	node *new_node = new node(info);

	if (head == NULL)
	{
		head = new_node;
		return;
	}	
	new_node->next = head;
	head = new_node;
}

void display(node *head)
{
	node *temp = head;

	while (temp != NULL)
	{
		cout << "[" << temp->info << " ~ " << temp->next << "] ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
	cout << endl;
}
void insertAtTail(node *&head, node *temp)
{
	node *current;
	current = head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;
}

// Reversal using recursion
void reverseByRecursion(node *&head)
{
	node *temp;
	temp = head;
	if (head == NULL || head->next == NULL)
		return;
	head = head->next;
	temp->next = NULL;
	reverseByRecursion(head);
	insertAtTail(head, temp);
}

void reverseLL(node *&head)
{ // REVERSAL USING LOGIC
	node *curr = head;
	node *temp = head;
	if (head->next == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	else
	{
		while (curr->next != NULL)
		{
			temp = curr->next;
			curr->next = temp->next;
			temp->next = head;
			head = temp;
		}
	}
}

int main()
{
	node *head = NULL;
	int sizeOfLL;
	cout << "enter the size of the linked list" << endl;
	cin >> sizeOfLL;

	for (int i = 0; i <= sizeOfLL; i++)
	{
		int x;
		cout << "enter the value for node" << endl;
		cin >> x;
		insertAtHead(head, x);
	}
	cout << endl;
	cout << "display" << endl;
	display(head);
	cout << endl;
	// reverseLL(head);
	// cout<<"display after reversal"<<endl;
	// display(head);
	reverseByRecursion(head);
	cout << "display after ReversebyRecursion" << endl;
	display(head);
	return 0;
}
