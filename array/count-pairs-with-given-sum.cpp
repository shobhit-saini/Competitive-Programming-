#include<iostream>
#include<map>
using namespace std;
	int main()
	{
		int N = 0, sum = 0, i = 0, count = 0;
		map <int, int> m;
		cout<< "Enter the size of an array:";
		cin>> N;
		cout<< "Enter the sum:";
		cin>> sum;
		
		int ar[N];
		
		for(i = 0; i < N; i++)
		{
			cin>> ar[i];
		}
		
		for(i = 0; i < N; i++)
		{
			m[ar[i]]++;
		}
