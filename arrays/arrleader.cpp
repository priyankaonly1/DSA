#include<iostream>
using namespace std;

void leader(int arr[], int n)
{
	int curr_ldr = arr[n-1];
	cout<<"leaders are "<<curr_ldr<<" ";
	
	for(int i=n-2;i>=0;i--)
	{
		if(curr_ldr<arr[i])
		{
			curr_ldr = arr[i];
			cout<<curr_ldr<<" ";
		}
	}
}

int main()
{
	int arr[] = {55,10,25,10,6,5,2};
	int n = 7;
	leader(arr,n);
}
