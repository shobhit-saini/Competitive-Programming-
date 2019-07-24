#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,b,c,a;
    cin>>n>>q;
    int **arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        cin>>a;
       arr[i]=new int[a];
        for(int j=0;j<a;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int k=0;k<q;k++)
    {
        cin>>b>>c;
        cout<<arr[b][c]<<endl;
    }
    return 0;
}

