#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;  // e.g. "9988776655"

        vector<int> a(10);
        for (int i = 0; i < 10; i++) {
            a[i] = s[i] - '0';  // convert char to int
        }
        for (int i = 0; i < 10; i++)
        {
            for (int k = i + 1; k < 10; k++)
            {
                if (a[i] > a[k] && a[k] >= 9 - i)
                {
                    int temp;
                    temp = a[i];
                    a[i] = a[k];
                    a[k] = temp;
                }
            }
        }

        for (int i = 0; i < 10; i++)
        {
            cout << a[i];
        }
        cout<<endl;
    }

    return 0;
}