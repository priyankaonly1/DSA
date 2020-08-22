#include<iostream>
using namespace std;


int main()
{
	int arr[] = {23,22,45,67,66};
	int n = 5;
	int countodd=0;
	int counteven=0;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2 == 0)
		{
			//cout<<arr[i]<< "is even number"<<endl;
			counteven++;
		}
		
		if(arr[i]%2 != 0)
		{
			//cout<<arr[i]<< "is odd number"<<endl;
			countodd++;
		}
	}
	cout<<"total odd numbers are :"<<countodd<<endl;
	cout<<"total even numbers are :"<<counteven;
	
	
}

