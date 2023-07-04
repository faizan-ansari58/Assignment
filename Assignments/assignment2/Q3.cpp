//Sort two parallel arrays containing student id's and student marks. Write a complete C++ code for your program.
//HINT:
//1- Sort on id's.
//2- Sort on marks.
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int StudentID[n]={1,2,4,5,3};
	int StudentMarks[n]={12,34,54,23,65};
	//Sorted According to IDs
	for(int i=0; i<n ; i++)
	{
		for(int j=i+1;j< n;j++)
		{
			if(StudentID[i]>StudentID[j])
			{
				//sorting students
				int temp = StudentID[i];
				StudentID[i]=StudentID[j];
				StudentID[j]=temp;
				
				//sorting marks accordingly
				int temp2 = StudentMarks[i];
				StudentMarks[i]=StudentMarks[j];
				StudentMarks[j]=temp2;
			}
		}
	}
	cout<<"Sorted according to IDs"<<endl;
	for(int i=0; i<n;i++)
	{
		cout<<StudentID[i]<<"\t"<<StudentMarks[i]<<endl;
	}
	for(int i=0; i<n ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(StudentMarks[i]>StudentMarks[j])
			{
				//sorting marks
				int temp = StudentMarks[i];
				StudentMarks[i]=StudentMarks[j];
				StudentMarks[j]=temp;
				
				//sorting students accordingly
				int temp2 = StudentID[i];
				StudentID[i]=StudentID[j];
				StudentID[j]=temp2;
			}
		}
	}
	cout<<"Sorted according to Marks"<<endl;
	for(int i=0; i<n;i++)
	{
		cout<<StudentID[i]<<"\t"<<StudentMarks[i]<<endl;
	}
}
