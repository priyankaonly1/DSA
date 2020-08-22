#include<iostream>
using namespace std;

void revbyd(int arr[], int n, int d)
{
	int temp[n];
	for(int i=0;i<d;i++)
	{
		temp[i] = arr[i];
	}
	
	for(int i=d;i<n;i++)
	{
		arr[i-d] = arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		arr[i+n-d] = temp[i];
	}
}


int main()
{
	int arr[] = {1,2,3,4,5,6};
	int n = 6;
	int d = 4;
	revbyd(arr,n,d);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
}
