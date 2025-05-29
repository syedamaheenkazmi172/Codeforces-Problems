#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; // size of binary string
        cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);
        string* a = new string[n];
        
        for (int k = 0; k < n; k++)
        {
            a[k]=s;
            if (a[k][k]=='1')
            {
                a[k][k]='0';
            }
            else if (a[k][k]=='0')
            {
                a[k][k]='1';
            }
        }
        
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               if (a[i][j]=='1')
               {
                    count++;
               }
               
            }
            
        }
    cout<<count<<endl;   
    }

    return 0;
}