/*Write a C++ program which input two c-strings, a text and a pattern from the user and find the
starting index of all the occurrences of pattern in array text.
For example text = "This is the first course of programming and it is the first assignment on the arrays"
and pattern = "the", your program should output 
9, 51 and 75
You can assume that text can be at most of size 100.
*/
#include<iostream>
using namespace std;
int main()
{
	string input;
	string search;
	cout<<"Enter input string: ";
	getline(cin,input);
	cout<<"\nEnter pattern to search: ";
	cin>>search;
	cout<<"\nOccurance indexes are: ";
	for(int i=0 ; i < input.length() ; i++)
	{
		
		if(search[0]==input[i] && search[1]==input[i+1] && input[i-1]==' ')
		{
			cout<< i+1 <<"\t";
		}
		else if(search[0]==input[i] && search[1]==input[i+1] && search[2]==input[i+2] && input[i-1]==' ')
		{
			cout<< i+1 <<"\t";
		}
		else if(search[0]==input[i] && search[1]==input[i+1] && search[2]==input[i+2] && search[3]==input[i+3] && input[i-1]==' ')
		{
			cout<< i+1 <<"\t";
		}
		else if(search[0]==input[i] && search[1]==input[i+1] && search[2]==input[i+2] && search[3]==input[i+3] && search[4]==input[i+4] && input[i-1]==' ')
		{
			cout<< i+1 <<"\t";
		}
		
	}
}
