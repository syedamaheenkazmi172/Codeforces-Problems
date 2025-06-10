#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int c = 1;

        if (b >= 6) //after 6 we do not try to add into b because it starts to give larger values
        {
            int x = a;
            int count = 0;
            while (x > 0)
            {
                x /= b;
                count++;
            }
            cout << count << endl;
        }
        else
        {
            int min_count = INT_MAX;
            for (int i = b; i <= 6; i++)
            {
                int count = i - b; //checks how many times we have to make b to reach i-b 
                int x = a;
                if (i >= 2) //if i is equal to 1, it is of no use to keep on dividing a by it
                {
                    while (x > 0)
                    {
                        x /= i;
                        count++;
                    }
                    min_count = min(count, min_count);
                }
            }
            cout << min_count << endl;
        }
    }
    return 0;
}
