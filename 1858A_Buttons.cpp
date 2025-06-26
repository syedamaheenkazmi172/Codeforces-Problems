#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        bool player1=false,player2=false;
        if(c%2==0) player2=true;
        else player1=true;
        if(a!=b){
            if(a>b) {
                player1=true;
                player2=false;
            }
            else if(b>a) {
                player2=true;
                player1=false;
            }
        }
        if(player1) cout<<"First"<<endl;
        else if(player2) cout<<"Second"<<endl;
    }
}
