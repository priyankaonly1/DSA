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

node *insertBegin(node *head,int key)
{
	node *temp = new node(key);
	temp->next = head;
	return temp;
}


bool isLoop(node *head)
{
	node *slow_p = head, *fast_p = head;
	while(fast_p !=  NULL && fast_p->next != NULL)
	{
		slow_p = slow_p -> next;
		fast_p = fast_p -> next->next;
		if(slow_p == fast_p)
		{
			cout<<"loop found ";
			return true;
		}
			
	}
	cout<<"no loop found ";
	return false;
}

int main()
{
	node *head = NULL;
	
	head = insertBegin(head,30);
	head = insertBegin(head,25);
	head = insertBegin(head,20);
	head = insertBegin(head,15);
	head = insertBegin(head,10);
//	head->next->next->next->next = head;
	head->next->next->next->next = head->next;
	isLoop(head);
}
