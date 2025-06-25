#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                cin >> a[i][j];
        }
        vector<int> count(5);
        int sum = 0;
        
        for (int i = 0; i < 5; i++)
        {
            for (int j = i; j < 10-i; j++)
            {
                if(a[i][j]=='X') count[i]++;
                if(a[9-i][j]=='X') count[i]++;
            }
            for (int j = i+1; j < 9-i; j++)
            {
                if(a[j][i]=='X') count[i]++;
                if(a[j][9-i]=='X') count[i]++;
            }
            
            sum += (count[i] * (i + 1));
        }
        cout << sum << endl;
    }

    return 0;
}