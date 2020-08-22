#include<iostream>
using namespace std;

struct list{

	int data;
	list *next;
	
	list(int x)
	{
		data = x;
		next = NULL;
	}	
};

list *insertBegin(list *head, int data)
{
	list *temp = new list(data);
	temp->next = head; 
	return temp;
}

void printlist(list *head)
{
	list *curr=head;
	while(curr!=NULL)
		{
			cout<<curr->data<<" "<<curr->next<<"||";
			curr = curr->next;
		}
}

int main()
{
	list *head = NULL;
	
	head = insertBegin(head, 5);
	head = insertBegin(head,10);
	head = insertBegin(head,60); 
	printlist(head);
	
	
	
}
