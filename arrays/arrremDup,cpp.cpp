#include<iostream>
using namespace std;

int remDup(int arr[],int n)
{
	int temp[n];
	temp[0] = arr[0];
	int new_size = 1;
	
	for(int i=1;i<n;i++)
	{
		if(temp[new_size-1] != arr[i])
		{
			temp[new_size] = arr[i];
			new_size++;
		}
	}
	
	for(int i=0;i<new_size;i++)
	{
		arr[i] = temp[i];
	}
	return new_size;
}

int main()
{
	int arr[] = {10,10,18,40,40,23,23};
	int n = 7;
	int new_n = remDup(arr,n);
	
	cout<<"new size is "<<new_n<<endl;
	
	for(int i=0;i<new_n;i++)
	{
		cout<<arr[i]<< " ";
	}
	
	
}
