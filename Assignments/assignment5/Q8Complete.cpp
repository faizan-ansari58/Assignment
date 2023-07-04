#include<iostream>
#include<fstream>
using namespace std;
void doubleSize( int mat[2][2] )
{
	int mat1[2*2][2*2];
	
	for(int i =0; i<2 ; i++)
	{
		for(int j =0; j<2 ; j++)
		{
			mat1[i][j] = mat[0][0];
		}
	}
	for(int i =0; i<2 ; i++)
	{
		for(int j =2; j<4 ; j++)
		{
			mat1[i][j] = mat[0][1];
		}
	}
	for(int i =2 ; i<4 ; i++)
	{
		for(int j =0; j<2 ; j++)
		{
			mat1[i][j] = mat[1][0];
		}
	}

	for(int i =2 ; i<4 ; i++)
	{
		for(int j =2; j<4 ; j++)
		{
			mat1[i][j] = mat[1][1];
		}
	}

	cout<<"Double Matrix"<<endl;
	for(int i=0 ; i < 4 ; i++)
	{
		for(int j=0 ; j < 4 ; j++)
		{
			cout<<mat1[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void rotateMatrix(int mat[2][2])
{
	int a01 = mat[0][1];
	int a11 = mat[1][1];
	
	mat[0][0]=mat[1][0];
	mat[0][1]=mat[0][0];
	mat[1][0]=a11;
	mat[1][1]=a01;
	 
	
	cout<<"Rotated matrix is "<<endl;
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}
int main()
{
	fstream file;
	file.open("image.txt" , ios::in);
	if(!file)
	{
		cout<<"Error";
	}
	//getting rows and columns from the file
	int rows;
	file>>rows;
	int columns;
	file>>columns;
	const int r=rows;
	const int c=columns;
	int matrix[2][2];
	//inserting the data to matrix
	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			int data;
			file>>data;
			matrix[i][j]=data;
		}
	}
	//displaying the current matrix
	cout<<"Current matrix is "<<endl;
	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	doubleSize(matrix);
	rotateMatrix(matrix);
}
