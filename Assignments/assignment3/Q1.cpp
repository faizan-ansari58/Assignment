/*
For example,
the   Answer to life, The   Universe , and everything
Is 42.

Should produce the following output:

The answer to life, the universe, and everything is 42.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string input="my Name is Muhammad      FaiZan.";\
	int length=input.length();
	for(int i=1;i<length;i++)
	{
		//check space from i to i+1
		if((input[i]) == ' ' && (input[i+1]) == ' ' )
		{
			for(int j=i ; j < length ; j++)
			{
				input[j]=input[j+1];
			}
		}
		//check space between i+1 and i+2
		if((input[i+1]) == ' ' && (input[i+2]) == ' ' )
		{
			for(int j = i+2 ; j < length ; j++)
			{
				input[j]=input[j+1];
			}
		}
		//check space between i and i-1
		if((input[i-1]) == ' ' && (input[i]) == ' ' )
		{
			for(int j=i-1 ; j < length ; j++)
			{
				input[j]=input[j+1];
			}
		}
		//check space between i-1 and i-2
		if((input[i-2]) == ' ' && (input[i-1]) == ' ' )
		{
			for(int j=i-2 ; j < length ; j++)
			{
				input[j]=input[j+1];
			}
		}
		//check first letter and change if it is lowercase
		if(!isupper(input[0]))
		{
			input[0]=input[0] + 32;
		}
		//check other letter and change if it is uppercase
		if(isupper(input[i]))
		{
			input[i]=input[i]+32;
		}
		//check space between word and comma
		if((input[i]) == ' ' && (input[i+1]) == ',' )
		{
			for(int j=i ; j < length ; j++)
			{
				input[j]=input[j+1];
			}
		}
	}
	cout<<input;
}
