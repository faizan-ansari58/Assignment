/*Write a program that converts from 24-hour notation to 12- hour notation. For example it should convert 14:25 to 2:25 PM. The input is given as two integers.
There should be at least three functions, one for input, one to do the conversion and one for output. Record the AM/PM information as a value of type char,
'A' for AM and 'P' for PM. Thus, the function for doing conversions will have a call-by-reference formal parameter of type char to record whether is AM or PM.
 (The function will have other parameters as well). 
Include a loop that lets the user repeat this computation for new input values again and again until the user says he or she wants to end the program.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input;
	string min;
	string hour;
	string timeStamp;
	int loop=1;
	while (loop != 0)
	{
		cout << "Enter Time in 24-Hour format: ";
		cin >> input;
		
		int i = 0;
		//traversing to get hours
		while (input[i] != ':')
		{
			hour += input[i];
			i++;
		}
		//incrementing i to pass the colin(:)
		i++;
		//traversing to get minutes
		for (int j = i; j < input.length(); j++)
		{
			min += input[j];

		}
		//converting minutes and hours to integer from string
		int h = stoi(hour);
		int m = stoi(min);

		if (m > 60)
		{
			cout << "invalid minutes"<<endl;
			break;
		}

		if (h >= 13)
		{
			h = h - 12;
			timeStamp = "PM";
		}
		else
		{
			timeStamp = "AM";
		}


		cout << "Time in 12-Hour format is: ";
		cout << h << ":" << m << " " << timeStamp<<endl;

		cout << "Press 0 to exit or 1 to contine";
		cin >> loop ;
	}

}
