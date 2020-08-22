#include<iostream>
using namespace std;

struct employee
{
	string name;
	int id;
	int age;
	string email_id;
	
};


int main()
{
	cout<<"Please enter the employee details "<<endl;
	employee e1;
	cout<<"employee name "<<endl;
	cin>>e1.name;
	cout<<"employee id "<<endl;
	cin>>e1.id;
	cout<<"employee age "<<endl;
	cin>>e1.age;
	cout<<"email_id"<<endl;
	cin>>e1.email_id;
	cout<<"all details are "<<endl;
	cout<<e1.name<<" "<<e1.id<<" "<<e1.age<<" "<<e1.email_id;
	
	
		
}
