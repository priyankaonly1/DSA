#include<iostream>

using namespace std;

struct Node{
	int key;
	Node *next;
	Node(int x)
	{
		key = x;
		next = NULL;	
	}
};

Node *insertBegin(Node *head, int key)
{
	Node *temp = new Node(key);
	temp->next = head;
	return temp;
}


int main()
{
	Node *head = NULL;
	head = insertBegin(head,20);
	head = insertBegin(head,56);
	head = insertBegin(head,90);
	cout<<head->key<<endl;
	cout<<head->next;
	
}
