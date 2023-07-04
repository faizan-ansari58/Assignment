#include<iostream>
using namespace std;
void checkTriangle(int input)
{
	int result=1;
	bool check;
		for(int i=2;i<100;i++)
		{
			
			result = result + i;
			if(result==input || input==1)
			{
				check=true;
				break;
			}	
		}
		if(check==true)
		{
			cout<<"The input Number "<<input<<" prints a triangle"<<"\n";
		}
		else
		{
			cout<<"The input Number "<<input<<" can not print a triangle"<<"\n";
		}
}
int main()
{
	int input;
	while(true)
	{
		cout<<"Enter Number to check wether it can print triangle or not : ";
		cin>>input;
		checkTriangle(input);
		if(input==0)
			break;
	}
	
	
}
