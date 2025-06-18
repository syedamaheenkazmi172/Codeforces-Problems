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
        int count=0;//counter for operations
        int count_neg=0,count_pos=0;
        //this loop counts number of +1 and -1
        for (int i = 0; i < n; i++)
        {
            if(a[i]==-1) count_neg++;
            if(a[i]==1) count_pos++;
        }
        
        int sum=0,product=1;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
            product*=a[i];
        }
        if (sum<0)
        {
            while (sum<0)
            {
                count++;//indicates increase in operations
                count_neg--;
                count_pos++;
                //need to keep track of both
                //as sum is negative, we have to make it positive so -1 is replaced by 1
                sum=count_pos+count_neg*(-1);
                product/=(-1);//we also need to update our product so that it does not go to next if statement, if not necessary
            }
        }
        if (product==-1)
        {
            count++;
        }
        cout<<count<<endl;
    }
    

    return 0;
}