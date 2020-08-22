#include<iostream>
using namespace std;

void leader(int arr[], int n)
{
	int curr_ldr = arr[n-1];
	cout<<"leaders are "<<curr_ldr<< " ";
	
	for(int i=n-1;i>=0;i--)
	{
		if(curr_ldr<arr[i])
		{
			curr_ldr = arr[i];
			cout<<curr_ldr<< " ";
		}
	}
} 
int main()
{
	int arr[] = {23,12,15,6,5,1};
	int n = 6;
	leader(arr,n);	
}




