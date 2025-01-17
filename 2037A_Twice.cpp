#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,score=0;
        cin>>n;

        vector <int>a(n);
        vector <int>b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a.at(i);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[i]==a[j] && a[i]!=b[j] &&  a[j]!=b[j])
                {
                    score=score+1;
                    a[i]=a[j]=b[j];
                    break;   
                }
            }
                
        }
            
        cout<<score<<endl;
    }
       return 0; 
}
    

    
