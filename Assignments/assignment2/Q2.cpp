#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	//sizes of arrays
	int a=5,b=5,c=10;
	//initializing arrays
	int arr1[a]={34,55,7,4,6};
	int arr2[b]={2,73,54,97,5};
	int result[c];
	//moving values to resultant array
	for(int i=0;i<c;i++)
	{
		if(i<a)
		{
			result[i]=arr1[i];
		}
		if(i>=a)
		{
			result[i]=arr2[i-a];
		}
	}
	//sorting elements in array
	for(int i=0;i<c;i++)
	{
		for(int j=i+1;j<c;j++)
		{	
			if(result[i]>result[j])
			{
				int temp = result[i];
				result[i]=result[j];
				result[j]=temp;
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<result[i]<<endl;
	}
}
