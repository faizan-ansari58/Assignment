#include<iostream>
using namespace std;
int main()
{
	int size = 5;
	int z=1;
	//printing upper part
	for(int i = 0; i < size ; i++)
	{
		for(int j = size ; j > i ; j--)
		{
			cout<<" ";
		}
		cout<<"*";
		if(i>0)
		{
			for(int k = 1 ; k <= z ; k++)
			{
				cout<<" ";
			}
			cout<<"*";
			z+=2;
		}
		cout<<"\n";
	}
	//printing lower part
	int s=size*2;
	for(int i = 0; i <= size ; i++)
	{
		for(int j = 0; j < i ; j++)
		{
			cout<<" ";
		}
		cout<<"*"; 
		for(int k = 1 ; k < s ; k++)
		{
			cout<<" ";
		}
		s-=2;
		if(i<size)
		{
			cout<<"*";
		}
		cout<<"\n";	
	}
}
