#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count=0,max_count=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]==0)
            {
                count++;
                max_count=max(max_count,count);
            }
            if (a[i]==1)
            {
                max_count=max(max_count,count);
                count=0;
            }
            
            
        }
        cout<<max_count<<endl;
    }
    

    return 0;
}