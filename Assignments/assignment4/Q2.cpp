/*A 4 Byte integer can store at most a 10 digit number. However, in some applications we may want to process huge integers.
We can represent such huge integers by keeping each digit of the huge integer as one element of an integer array.
For example the number, 23568978965412323698, can be kept as an integer array of 20 elements. 

Write a C++ program to compare two huge integers. Your program should work as follows:
input two huge integers A and B from the user through cin.getline,
convert each digit character to an integer and store it in an integer array. 
Finally, output 1 if A > B, 0 if A=B and -1 if A<B. Both the huge integers may or may not have equal number of digits.
Here, you can assume that the input huge integer can be of at most 50 digits.   
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1[50];
	int num2[50];
	string str1;
	string str2;
	bool num1Greater=false;
	bool num2Greater=false;
	bool checkEqual=true;
	cout << "Enter first big number (max 50) ";
	getline(cin, str1);

	cout << "Enter second big number (max 50) ";
	getline(cin, str2);
	//conversion of character to integer by subtracting asski value of 0 from it
	for (int i = 0; i < str1.length(); i++)
	{
		num1[i] = str1[i] - 48;
	}                 
	for (int i = 0; i < str2.length(); i++)
	{
		num2[i] = str2[i] - 48;
	}
	//check for equal numbers and return true
	for(int i=0 ; i < str1.length() ; i++)
	{
		if(num1[i]==num2[i])
		{
			continue;
		}
		else
		{
			checkEqual=false;
		}
	}
	//check for number 1 greater or number 2 greater and return true accordingly
	for(int i=0 ; i < str1.length() ; i++)
	{	
		if(num1[i] > num2[i] )  
		{
			num1Greater=true;
		}
		else if(num2[i] > num1[i] )
		{
			num2Greater=true;
		}	
	}
	//conditions for checking numbers
	if(str1.length() > str2.length() )
	{
		cout<<"\nNumber 1 is greater than number 2";
	}
	else if(str1.length() < str2.length())
	{
		cout<<"\nNumber 2 is greater than number 1";
	}
	else if(checkEqual==true)
	{
		cout<<"\nNumber 1 is equal to number 2";
	}
	else if(num2Greater == true)
	{
		cout<<"\nNumber 2 is greater than number 1";
	}
	else if(num1Greater == true)
	{
		cout<<"\nNumber 1 is greater than number 2";
	}

	
}
