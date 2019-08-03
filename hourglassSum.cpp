int hourglassSum(vector<vector<int>> arr) {
    int sum,max,i,j,k=1;
    for(i=0;i<arr.size()-2;i++)
    {
        for(j=0;j<arr[0].size()-2;j++)
        {
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+
            arr[i+2][j+1]+arr[i+2][j+2];
            if(k==1)
            {
                max=sum;
                k++;
            }
            cout<<"\n"<<sum;
            if(max<sum)
            {
                max=sum;
            }
        }


    }

return max;
}
