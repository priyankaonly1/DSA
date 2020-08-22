#include<iostream>

using namespace std;

int main()
{
	int arr[] = {3,5,8,6,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int res = arr[0];
	
	for(int i=0;i<n;i++)
	{
		res = max(res,arr[i]);
	}
	
	cout<<"maximum element of array is "<<res;
}
	
	
