/*Write a program that takes two strings, a source and a token from user as input and break the source
string that are separated by characters contained in token. For example source = "this string is my string"
and token = "is", your program should print the following in an output file.
"th"
" string "
" my string"
*/
#include<iostream>
using namespace std;
int main()
{
	string input="this string is my string";
	string token="is";
	
	for(int i=0 ; i < input.length() ; i++)
	{
		
		if(token[0]==input[i] && token[1]==input[i+1]  )
		{
			i++;
			cout<<endl;
			continue;
		}
		else
		{
			cout<<input[i];
		}
		
	}
}
