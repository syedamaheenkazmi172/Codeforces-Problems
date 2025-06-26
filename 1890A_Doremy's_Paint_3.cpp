#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector <int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>freq(100001,0);
        bool possible=false;
        for(int element:a)
        {
            freq[element]++;
        }
        vector <int> distinct;
        for(int c:freq){
            if(c>0) distinct.push_back(c);
        }
        if(distinct.size()==1) possible =true;
        else if(distinct.size()==2)
        {
            int difference;
            difference=abs(distinct[0]-distinct[1]);
            if(difference>1) possible=false;
            else possible=true;
        }
        else possible=false;
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}