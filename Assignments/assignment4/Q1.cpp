/*A prime number is any integer that is evenly divisible only by itself and 1. The Sieve of Eratosthenes is a method of finding prime numbers.
It operates as follows:
"	Create an array with all elements initialized to 1 (true). Array elements with prime subscripts will remain 1. 
All other array elements will eventually be set to zero.

"	Starting with array subscript 2, every time an array element i is found whose value is 1,
loop through the remainder of the array and set to zero every element whose subscript is a multiple of i. 
For array subscript 2, all element beyond 2 in the array that are multiples of 2 will be set to zero (subscripts 4, 6, 8, 10, etc.);
for array subscripts 3, all elements beyond 3 in the array that are multiples of 3 will be set to zero (subscripts 6, 9, 12, 15, etc.); and so on.

When this process is complete, the array elements that are still set to one indicate that the subscript is a prime number.
These subscripts can then be printed. Write a program that uses an array of 200 elements to determine and print the prime numbers between 2 and 199.
Ignore element 0 and 1 of the array.
*/
#include<iostream>
using namespace std;
int main()
{
	
	const int size=200;
	int prime[size] ;
	for(int i=0 ; i<size ; i++)
	{
		prime[i]=1;
	}
	//check the conditions to make index values zero where remainder is zero
	for(int i=2 ; i<size ; i++)
	{
		if(i%2 == 0 && i>2)
		{
			prime[i]=0;
		}
		else if(i%3 == 0 && i>3)
		{
			prime[i]=0;
		}
		else if(i%5 == 0 && i>5)
		{
			prime[i]=0;
		}
		else if(i%7 == 0 && i>7)
		{
			prime[i]=0;
		}
		else if(i%11 == 0 && i>11)
		{
			prime[i]=0;
		}
		else if(i%13 == 0 && i>13)
		{
			prime[i]=0;
		}
		else
		{
			continue;
		}		
	}
	//print those array indexes where value is not zero
	for(int i=2 ; i<size ; i++)
	{
		if(prime[i] != 0)
		{
			prime[i]=i;
			cout<<prime[i]<<"\t";
		}
		
	}
	
	
}
