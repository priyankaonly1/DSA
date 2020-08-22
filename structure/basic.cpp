#include<iostream>

using namespace std;

struct employee
{
	int id;
	int age;
	string name;
	employee(int t,int p, string ex)
	{
		id = t;
		age =p;
		name = ex;
	}
};

int main()
{
	employee e1(1003,23,"shubendu biswas");
	cout<<e1.id<<endl;
	cout<<e1.age<<endl;
	cout<<e1.name;
	

}
