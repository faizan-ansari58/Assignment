/*Write a program that asks for users' height, weight and age then computes clothing sizes according to the formulas:
"Hat size=weight in pounds divided by height in inches and all that multiplied by 2.9.
"Jacket size =height times weight divided by 288 and then adjusted by adding 1/8 of an inch for each 10 years over age 30.
(Note that the adjustment takes place after full ten years. So there is no adjustment for ages 30 to 39 but 1/8 of an inch are added for age 40.)
"Waist in inches= weight divided by 5.7 and then adjusted by 1/10 of an inch for each 2 years over age 28.
(Note that the adjustment only takes place after a full 2 years. So there is no adjustment for age 29 but 1/10 of an inch is added for age 30).
Use function for each calculation. Your program should allow the user to repeat this calculation as often as user wishes.
*/
#include<iostream>
using namespace std;
float calHat(float weight , float height)
{
	float cal = (weight/height) * 2.9;
	return cal;
}
float calJacket(float weight , float height, int age)
{
	float cal = (weight * height) / 288;
	for(int i = 40 ; i <= age ; i+=10)
	{
		cal = cal + 1/8; 
	}
	return cal;
}
float calWaist(float weight , int age)
{
	float cal = weight / 5.7 ;
	for(int i = 30 ; i <= age ; i+=2)
	{
		cal = cal + 1/10; 
	}
	return cal;
}	 

int main()
{
	float height;
	float weight;
	float age;
	int loop =1;
	while(loop != 0 )
	{
		cout<<"Enter Your height in inches: ";
		cin>>height;
		cout<<"Enter Your weight in pounds: ";
		cin>>weight;
		cout<<"Enter Your age: ";
		cin>>age;	
		cout<<"Calculated hat size is: "<<calHat(weight , height)<<endl;
		cout<<"Calculated Jacket size is: "<<calJacket(weight , height, age)<<endl;
		cout<<"Calculated waist size in inches is: "<<calHat(weight , age)<<endl;
		cout<<"press 0 to Exit or press 1 to continue: ";
		cin>>loop;
	}
	
}
