int gcd(int m, int n)
{
    if(m == 0)
    {
       return n;
    }
        else if(n == 0)
        {
            return m;
        }
            else
            {
                return gcd(n%m, m);
            }
}
// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int i = 0, temp = 0, j = 0, k = -1;
    cout<< gcd(a.size(), d)<<"\n";
        for(i = 0; i < gcd(a.size(), d); i++)
        {
            temp = a[i];
            j = i;
            while(1)
            {
                k = (j + d)% a.size();
                if(k == i)
                {
                    break;
                }
                a[j] = a[k];
                j = k;
            }
             a[j] = temp;

        }
    return a;

}
