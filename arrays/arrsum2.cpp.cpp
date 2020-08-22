#include<iostream>
#include<numeric>
using namespace std;

int main()
{
	int arr[] = {3,5,8,6,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int s = 0;
	
	s = accumulate(arr, arr+n, s);
	
	cout<<"sum of array is "<<s;
}
