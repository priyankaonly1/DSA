#include<iostream>
#include<algorithm>
using namespace std; 

int main()
{
	int arr[] = {3,5,8,6,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int res = *max_element(arr, arr+n);
	
	cout<<res;
}
