#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;
        int zero=0,one=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }
        int x=min(zero,one); //this will tell how many pairs of 0 and 1 do we have in our string that can be deleted
        if (x%2==1)
        {
            cout<<"DA"<<endl;
        }
        else
        {
            cout<<"NET"<<endl;
        }
    }
    return 0;
}