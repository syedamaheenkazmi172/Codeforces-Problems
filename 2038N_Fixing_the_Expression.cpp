#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char temp;
        string s;
        cin>>s;

        switch (s[1])
        {
        case '<':
            if(s[0]<s[2]){
                temp='<';
                s[1]=temp;
            }
            else if (s[0]>s[2]) 
            {
                temp='>';
                s[1]=temp;
            }
            else if(s[0]==s[2])
            {
                temp='=';
                s[1]=temp;
            }
            
            
            break;
        case '>':
        if(s[0]>s[2]){
            temp='>';
            s[1]=temp;
            }
        else if (s[0]<s[2]) 
            {
                temp='<';
                s[1]=temp;
            }
        else
            {
                temp='=';
                s[1]=temp;
                break;
            }

            break;
        case '=':
            if(s[0]<s[2]){
                temp='<';
                s[1]=temp;
            }
            else if (s[0]>s[2]) 
            {
                temp='>';
                s[1]=temp;
            }
            else if(s[0]==s[2])
            {
                temp='=';
                s[1]=temp;
                
            }

            break;
        default:
            break;
        }
        cout<<s<<endl;
        }
    

    return 0;
}