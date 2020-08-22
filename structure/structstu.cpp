#include<iostream>
using namespace std;

struct stu
{
	int id;
	char name[25];
	
	void getdata()
	{
		cout<<"Enter student id, name "<<" ";
		cin>>id>>name;
		cout<<"Id = "<<id<<endl;
		cout<<"Name = "<<name;
	}
};

int main()
{
	stu p;
	p.getdata();
}
