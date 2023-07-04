/*void remove_till(char src[], int position, char c);
Write a function named remove_till which takes a c-string, an integer position and a character c. 
The function removes all characters starting from index position and towards the right until char c is encountered in the c-string.
If c isnt encountered the function removes all characters from index position till end of the array. 
Example:
Input: string="helloo! how are you today", position=8, c='y'
Output: string="helloo! ou today"
*/
#include<iostream>
using namespace std;
void remove_till(char src[], int position, char c)
{
	char newChar[20];
	string str = src;
	int length = str.length();
	int j=0;
	int k=0;
	//traversing till we get the index of given character
	while(src[k] != c)
	{
		k++;
	}
	for(int i=0 ; i<length ; i++)
	{
		//traversing till the position
		if(i < position)
		{
			newChar[j] = src[i];
			//j++ for getting the string index upto which it is copied to new array
			j++;
		}
		//now copying remaining string starting after index of given character up to which we had to remove the string
		if(i > k)
		{
			newChar[j]=src[i];
			j++;
		}	
	}
	for(int i=0 ; i<j ; i++)
	{
		cout<<newChar[i];
	}
}
using namespace std;
int main()
{
	char input[]="helloo! how are you today";
	int position = 8;
	char c='y';
	remove_till(input,position,c);
}
