#include<iostream>
using namespace std;
int main()
{
	int size = 5;
	//declaring z to print number of * accordingly
	int z=1;
	for(int j=0 ; j <= size*2 ; j++)
	{
		cout<<"*";
	}
	cout<<"\n";
	for(int i=0 ; i < size ; i++)
	{
		for(int j=size ; j > i ; j--)
		{
			cout<<"*";
		}
		for(int k=0 ; k<z ; k++)
		{
			cout<<" ";	
		}
		z+=2;	
		for(int j=size ; j > i ; j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	int s=7;
	for(int i=1 ; i < size ; i++)
	{
		for(int j=0 ; j <= i ;j++)
		{
			cout<<"*";
		}
		for(int k=s ; k>0 ; k--)
		{
			cout<<" ";
		}
		s-=2;
		for(int j=0 ; j <= i ; j++)
		{
			cout<<"*";
		}
		
		cout<<"\n";
	}
	for(int j=0 ; j <= size*2 ; j++)
	{
		cout<<"*";
	}
}