#include<iostream>
using namespace std;

int main()
{
	int arr[3][2];
	cout<<"enter the element ";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		
	}

}
