#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int rows = 0, columns = 0, i = 0, j = 0, temp = 0;
	cout<<"Enter the size of the matrix rowsXcolumns:";
	cin>> rows>> columns;
	int ar[rows][columns] ;
	int br[columns][rows] ;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			cin>> ar[i][j];
		}
	}
	for(i = 0; i < columns; i++)
	{
		for(j = 0; j < rows ; j++)
		{
			br[i][j] = ar[j][(abs(i-columns+1) )% columns];
		}
	}
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			cout<< br[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
