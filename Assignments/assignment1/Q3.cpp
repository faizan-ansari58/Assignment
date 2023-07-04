#include<iostream>
using namespace std;
int Sequence(int input)
{
	int a=1,b=1,c=1;
	int next;
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t";
	for(int i=4	;i<input;i++)
	{
		next= a + c;
		a=b;
		b=c;
		c=next;
		cout<<next<<"\t";
	}
	if(input<=3)
	{
		return 1;
	}
}
int main()
{
	int input;
	cout<<"Enter Number to print sequence ";
	cin>>input;
	Sequence(input);
}
