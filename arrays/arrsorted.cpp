					// sorted (ascending or not) program

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]>arr[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int arr[] = {3,4,5,6,7};
	int n = 5;
	cout<<isSorted(arr,n);	
}
