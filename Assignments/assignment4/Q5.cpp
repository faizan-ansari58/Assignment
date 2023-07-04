/*Write a program that reads the person name in the following format: first name, then middle name or initial and then last name.
The program then outputs in a file the name in the following format:
Last_name, First_name Middle_Initial.
For example, the input
May Average User
Should produce the output:
User, May A.
The input
Mary A. User
Should also produce the output
User, May A.

Your program should work the same and place a period after the middle initial even if the input did not contain a period. 
Your program should allow for users who give no middle name or middle initial. In that case the output contains no middle name or initial. 
For example the input
Mary User
Should produce the output
User, Mary

Assume each name is at most 20 characters.
*/
#include<iostream>
using namespace std;
int main()
{
	string username="Mary A. User";
	string firstname;
	string middlename;
	string lastname;
	int i=username.length();
	int j=0;
	//getting first name
	while(username[j] != ' ')
	{
		firstname += username[j];
		j++;
	}
	//incrementing j to skip the space
	j++;
	//getting middle name
	while(username[j] != ' ' )
	{
		middlename += username[j];
		j++;
	}
	//incrementing j to skip the space
	j++;
	//getting last name
	while(username[j] != '\0')
	{
		lastname += username[j];
		j++;
	}
	//printing according to requirements
	cout<<"Given Name"<<endl;
	cout<<username<<endl;
	cout<<"Sorted Name"<<endl;
	cout<<lastname<<", "<<firstname<<" "<<middlename[0]<<".";

}
