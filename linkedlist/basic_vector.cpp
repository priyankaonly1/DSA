#include<iostream>
#include<vector>


using namespace std;

int main()
{
	vector<int> arr;
	
	arr.push_back(10);
	arr.push_back(12);
	arr.push_back(15);
	arr.push_back(17);
	arr.push_back(19);
	for(int i =0; i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<arr.back();
	//	arr.pop_back();
//	
//	for(int i =0; i<arr.size();i++)
//	{
//		cout<<arr[i]<<" ";
//	}
}
