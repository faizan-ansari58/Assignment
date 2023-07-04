/*Given two sets A and B, the union operation gives a new set that contains the elements of both the sets, but no element can be repeated. 
So given that A={1,4,6,7,9} and B={7,9,10,15} then C=AUB (where U denotes the union operation)={1,4,6,7,910,15}. 
Another important operation over sets is called intersection. For the sets A and B given above the set D=A?B (where ? denotes the intersection of sets) = {7,9}. 

You have to write program using arrays to represent sets that implements these set operations. 

Use const int size1=5 for size of first set and const int size2=8 for size of second set. Take inputs of sets from user and implement following functions:

void InputSet (int A[], int B[]); 	//take input from users for arrays A and B
void Union(int A[], int B[], int result[]); //take union of array A and B and store result in third array result
void Intersection(int A[], int B[], int result[]); //take intersection of array A and B and store result in third array result
void PrintSet(int A[]); //to print elements of array A
*/
#include<iostream>
using namespace std;
void Union( int arr1[] , int arr2[] )
{
	//printing elements of first array
	for(int i = 0 ; i < 5 ; i++)
	{
		cout<<arr1[i];
	}
	//checking for equal values and skipping them and printing different values
	for(int i=0 ; i<5 ; i++)
	{
		int check=0;
		for(int j=0 ; j<5 ; j++)
		{
			if(arr1[i] == arr2[j])
			{
				check=1;
				break;
			}	
		}
		if(check == 0)
		{
			cout<<arr2[i];
		}	
	}	
}
void Intersection( int arr1[] , int arr2[] )
{
	
	for(int i=0 ; i<5 ; i++)
	{
		int check=0;
		for(int j=0 ; j<5 ; j++)
		{
			//comparing values and printing onlly same ones
			if(arr1[j] == arr2[i])
			{
				check=1;
				break;
			}	
		}
		if(check == 1)
		{
			cout<<arr2[i];
		}	
	}	
}
int main()
{
	int set1[5]={1,2,8,4,5};
	int set2[5]={3,4,8,6,9};
	Union(set1 , set2);
	cout<<endl;
	Intersection(set1, set2);
	cout<<endl;
	
}
