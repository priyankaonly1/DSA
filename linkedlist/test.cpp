#include<iostream>
using namespace std;

struct node{
	int key;
	node *next;
	node(int x)
	{
		key = x;
		next = NULL;
	}
};

node *insertBegin(node *head, int key)
{
	node *temp = new node(key);
	temp->next = head;
	return temp;
}

void printlist(node *head)
{
	node *curr = head;
	while(curr != NULL)
	{
		cout<<curr->key<<" ";
		curr = curr->next;	
	} 
	cout<<endl;
}

void deletenode(node *ptr)
{
	node *temp = ptr->next;
	ptr->key = temp->key;
	ptr->next = temp->next;
	delete(temp);
}

int main()
{
	node *head = NULL;
	head = insertBegin(head,50);
	head = insertBegin(head,40);
	head = insertBegin(head,30);
	head = insertBegin(head,20);
	head = insertBegin(head,10);
	printlist(head);
	deletenode(head->next->next->next);
	printlist(head);
}
