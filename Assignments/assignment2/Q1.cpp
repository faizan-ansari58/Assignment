//Make a snake and ladders game in which you will use parallel arrays. Write a complete C++ program with proper conditions.
#include<iostream>
using namespace std;
int main()
{
	int arr[10][10];
	int num=1;
	int input=1;
	int position=0;
	//Entering the numbers from 1 to 100
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			arr[i][j]=num;
			num++;
		}
	}
	//printing the numbers from 1 to 100
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Prress 0 to exit"<<endl;
	while(input != 0)
	{
		cout<<"Enter input value ";
		cin>>input;
		position += input;
		
		
		if(position == 14)
		{
			position += 21;
		}
		else if(position == 29)
		{
			position -= 21;
		}
		else if(position == 22)
		{
			position += 56;
		}
		else if(position == 31)
		{
			position += 39;
		}
		else if(position == 74)
		{
			position += 12;
		}
		else if(position == 76)
		{
			position -= 39;
		}
		else if(position == 89)
		{
			position -= 21;
		}
		else if(position == 97)
		{
			position -= 17;
		}
		else if(position == 100)
		{
			cout<<"Conratulations You win"<<endl;
			break;	
		}
		else if(position >= 100)
		{
			cout<<"Try Again"<<endl;
			position-=input;	
		}
		
		cout<<"You are at "<<position<<" position"<<endl;
	}
}
