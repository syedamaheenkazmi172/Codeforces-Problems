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

        vector <long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int k=-1;
        int min_k=INT_MAX;
        //following loops won't work as product can reach 2^1000 but C++ won't allow to store such a large number
        // for (int i = 1; i < n; i++)
        // {
        //     __int128_t product1=1,product2=1;   
        //     for (int j = 0; j < i; j++)
        //     {
        //         product1*=a[j];
        //     }
        //     for (int j = i; j<n; j++)
        //     {
        //         product2*=a[j];
        //     }
        //     if (product1==product2)
        //     {
        //         k=i;
        //         if(k!=0)
        //         min_k=min(min_k,k);
        //     }
        // }

        //rather we will count our 2's
        for (int i = 0; i < n; i++)
        {
            int count1=0,count2=0;
            for (int j = 0; j < i; j++)
            {
                if(a[j]==2) count1++;
            }
            for (int j = i; j<n; j++)
            {
                if(a[j]==2) count2++;
            }
            if (count1==count2)
            {
                k=i;
                if(k!=0)
                min_k=min(min_k,k);
            }
        }
        
        if(min_k != INT_MAX)
        cout<<min_k<<endl;
        else cout<<"-1"<<endl;
    }
    

    return 0;
}