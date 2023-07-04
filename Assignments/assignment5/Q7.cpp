/*Write a program that implements the following operations on integer matrices:
"	Matrix Addition of two matrices
"	Matrix Multiplication of two matrices
"	Inverse of a matrix
"	Determinant of matrix
"	Adjoint of a matrix
Note that you have to use two dimensional arrays to implements matrix. Also write separate function for each of the above operation.
*/
#include<iostream>
using namespace std;
//matrix addition of two matrixes
void matrixAddition(int mat1[2][2] , int mat2[2][2])
{
	cout<<"Matrix Addition"<<endl;
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cout<<mat1[i][j] + mat2[i][j]<<"\t";
		}
		cout<<endl;
	}
}
//matrix multiplication of two matrixes
void matrixMult(int mat1[2][2] , int mat2[2][2])
{	
	cout<<"Matrix Addition"<<endl;
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cout<<mat1[i][j] * mat2[i][j]<<"\t";
		}
		cout<<endl;
	}
}
//matrix adjoint
void matrixAdj(int mat1[2][2])
{
	cout<<"Matrix Adjoint"<<endl;
	int temp =  mat1[0][0];
	mat1[0][0]=mat1[1][1];
	mat1[1][1]=temp;
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cout<<mat1[i][j]<<"\t";
		}
		cout<<endl;
	}	
}
//matrix determinent
int matrixDet(int mat[2][2])
{	
	int result = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
	return result;
}
//matrix inverse
void matrixInverse(int mat[2][2] )
{
	cout<<"Inverse of matrix "<<endl;
	//swaping digonal entries  
	int temp =  mat[0][0];
	mat[0][0]=mat[1][1];
	mat[1][1]=temp;
	//making non-digonal entries negative
	mat[0][1] *= -1;
	mat[1][0] *= -1;
	
	int det = matrixDet(mat);
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cout<<mat[i][j] / det<<"\t";
		}
		cout<<endl;
	}	
}

int main()
{
	int mat1[2][2];
	int mat2[2][2];
	cout<<"Enter First Matrix "<<endl;
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter second Matrix "<<endl;
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"First Matrix"<<endl;
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cout<<mat1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Second Matrix"<<endl;
	for(int i=0 ; i < 2 ; i++)
	{
		for(int j=0 ; j < 2 ; j++)
		{
			cout<<mat2[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	matrixAddition(mat1,mat2);
	matrixMult(mat1,mat2);
	matrixAdj(mat1);
	cout<<"Matrix Determinent is "<<matrixDet(mat1)<<endl;
	matrixInverse(mat2);
	
}
