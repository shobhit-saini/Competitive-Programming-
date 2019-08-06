long arrayManipulation(int n, vector<vector<int>> queries) {
    long long int v[n]={0};
    long long int a,b,k;
    long long int max;
    for(long long int i=0;i<queries.size();i++)
    {
        a=queries[i][0];
        b=queries[i][1];
        k=queries[i][2];
        for(long long int j=a;j<=b;j++)
        {
            v[j-1]+=k;
        }
    }
    max=v[0];
    for(long long int l=1;l<n;l++)
    {
        if(v[l]>max)
        max=v[l];
    }
return max;

}
