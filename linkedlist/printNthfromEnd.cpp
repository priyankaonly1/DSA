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
		cout<<curr->key<< " ";
		curr = curr->next;
	}
	cout<<endl;
}

void printNthfromEnd(node *head, int n)
{
	if(head == NULL)
	{
		return;
	}
	
	node *first = head;
	for(int i=0;i<n;i++)
	{
		if(first==NULL) return;
		first = first->next;
	}
	
	node *second = head;
	while(first != NULL)
	{
		second = second->next;
		first = first->next;
	}
	cout<<"nth element "<<second->key;
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
	int n;
	cout<<"enter the nth node"<<n<< " ";
	cin>>n;
	printNthfromEnd(head,n);
}










