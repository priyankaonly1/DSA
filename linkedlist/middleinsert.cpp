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

void printlist(node*head)
{
	node *curr = head;
	while(curr != NULL)
	{
		cout<<curr->key<<" "<<endl;
		curr = curr->next;
	}
}

void printmiddle(node *head)
{
	if(head == NULL)return;
	node *slow = head, *fast = head;
	
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"middle is "<<(slow->key);
	
	node *mid = new node(99);
	mid->next = slow->next->next;
	slow->next->next = mid;
}



int main()
{
	node *head = NULL;
	head = insertBegin(head,70);
	head = insertBegin(head,60);
	head = insertBegin(head,50);
	head = insertBegin(head,40);
	head = insertBegin(head,30);
	head = insertBegin(head,20);
	head = insertBegin(head,10);
	printlist(head);
	printmiddle(head);
	cout<<endl;
	printlist(head);
}











