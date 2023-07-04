#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num;
	int totalMins = 0;
	cout<< "Enter Number of calls: ";
	cin >> num;
	int length = num * 2;
	string input[10];

	for (int i = 0; i < length; i++)
	{
		cin >> input[i];
	}
	
	for (int i = 0; i < length; i+=2)
	{
		string strForHours1 = input[i];
		string strHours1;
		int hours1=0;
		int h1 = 0;
		//for starting hour
		while (strForHours1[h1] != ':')
		{
			strHours1 = strHours1 + strForHours1[h1];
			h1++;
		}
		hours1 = stoi(strHours1);
		//for ending hour adding 1 to access secound value of string
		string strForHours2 = input[i+1];
		string strHours2;
		int hours2=0;
		int h2 = 0;
		while (strForHours2[h2] != ':')
		{
			strHours2 = strHours2 + strForHours2[h2];
			h2++;
		}
		hours2 = stoi(strHours2);
		//Handeling exception for hour1 and hour2 as if one of the is zero make it 24
		if (hours1 == 0 )
		{
			hours1 = hours1 +  24;
		}
		else if (hours2 == 0)
		{
			hours2 = hours2 + 24;
		}
		//calculating starting mins and incrementing h1 to pass colon 
		string strMins1;
		int mins1=0;
		h1++;
		for (int k = h1; k <= h1+1; k++)
		{
			strMins1 = strMins1 + strForHours1[k];
		}
		mins1 = stoi(strMins1);
		mins1 = mins1 + hours1 * 60;
		//calculating ending mins incrementing h2 to pass colon 
		string strMins2;
		int mins2;
		h2++;
		for (int k = h2; k <= h1+1; k++)
		{
			strMins2 = strMins2 + strForHours2[k];
		}
		mins2 = stoi(strMins2);
		mins2 = mins2 + hours2 * 60;
		//final calculations to get minutees between starting and ending time
		int mins = mins1 - mins2;
		if (mins < 0)
		{
			mins = mins * -1;
		}
		totalMins = totalMins + mins ;
		if (totalMins < 0)
		{
			totalMins = totalMins * -1;
		}
		
	}
	cout << "Average call time is " << totalMins/num;

}

