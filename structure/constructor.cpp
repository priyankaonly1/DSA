#include<iostream>
using namespace std;

struct stu
{
	int id;
	int age;
	stu(int x, int y)
	{
		id = x;
		age =y;
	}
	

};

int main()
{
	stu object1(10,20);
	cout<<object1.age;
	cout<<endl;
	stu object2(90,100);
	cout<<object2.id;
	
}
