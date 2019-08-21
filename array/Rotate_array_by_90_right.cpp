#include<iostream>
#include<math.h>
using namespace std;
	int main()
	{
//////////////////////////INPUT///////////////////////////////////////////////
		int Rows = 0, Columns = 0, i = 0, j = 0;
		cout<<"Enter the size of an matrix:";
		cin>>Rows>>Columns;
		int ar[Rows][Columns];
		int br[Columns][Rows];
		for(i = 0; i < Rows; i++)
		{
			for(j = 0; j < Columns; j++)
			{
				cin>>ar[i][j];
			}
		}
		
///////////////////////90 DEGREE RIGHT ROTATION/////////////////////////		
		for(i = 0; i < Rows; i++)
		{
			for(j = 0; j < Columns; j++)
			{
				br[j][i] = ar[abs(i-Rows+1)%Rows][j];
				cout<<br[j][i]<<"\t";
			}
			cout<<"\n";
		}
		
//////////////////////OUTPUT/////////////////////////////////////	

	return 0;
	}
