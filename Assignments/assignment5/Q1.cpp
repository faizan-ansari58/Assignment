/*Suppose you have an integer array of 10 numbers (take input from the user). 
You have to display a histogram chart by showing the number of '#' equal to the value entered
in each element of the array raised to the power of its index value in the array (assume the indexes start from 1). 
Write a function named Histogram for this purpose which will receive an integer array
(think about other functions required). You can use built-in power function in your code. 
For Example: 	
Let's assume that we have an array of size 4 which has the following values: 5, 4 3 & 1. We make an assumption that our indexes start from 1,
so the value 5 is at 1st index. The no. of # to be printed first is 5 ^ 1 = 5. Similarly 4 ^ 2 = 16, 3 ^ 3 = 27 & 1 ^ 4 = 1. 
5 ##### 
4 ################ 
3 ########################### 
1 # 
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int arr[10]={5,4,3,1,2,2,2,2,2,2};
	for(int i =0 ; i < 10; i++)
	{
		int power=pow(arr[i],i+1);
		for(int j=0 ; j < power ; j++ )	
		{
			cout<<"#";
		}
		cout<<endl;	
	}
}
