#include<iostream>
using namespace std;

struct stu
{
	int id;
	int age;
	

};

int main()
{
	stu p = {10,20};
	cout<<p.id<<endl;
	stu *pp = &p;
	cout<<pp->id;
	
}
