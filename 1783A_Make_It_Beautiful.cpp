#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            s[i] = sum + a[i];
            sum += a[i];
        }
        sum = 0;
        int count = 0;
        bool flag=true;
        for (int i = 0; i < n-1; i++)
        {
            //checks if array is unique
            if (a[i] == a[i + 1])
                count++;
        }
        if (count == n-1)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                //this loop checks if sum of previous numbers is equal to number at an index
                if(a[i]==s[i-1]) flag=false;
            }
            if (flag)
            {
                cout<<"YES"<<endl;
                for (int i = 0; i < n; i++) cout<<a[i]<<" ";
                cout<<endl;
            }
            else
            {
                int temp;
                /*as condition is given that a[0]<a[1]<a[2]<.......<a[n-1]
                  so we will swap last element with first, in that way, highest sum will be calculated before*/
                temp=a[0];
                a[0]=a[n-1];
                a[n-1]=temp;
                cout<<"YES"<<endl;
                for (int i = 0; i < n; i++) cout<<a[i]<<" ";
                cout<<endl;
            }
            
        }
    }
}