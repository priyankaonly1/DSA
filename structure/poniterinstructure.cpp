#include<iostream>
using namespace std;

struct stu
{
	int id;
	int age;

	
};

int main()
{	
	stu normal_var;
	normal_var.id = 10;
	normal_var.age = 23;
	
	stu *pointer_var;
	pointer_var->age = 100;
	pointer_var->id = 45;
	
	
	
}
