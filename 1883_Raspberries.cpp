#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int min_distance = INT_MAX;
        bool possible = false;

        int even = 0;// will keep track of even numbers when k=4
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)//will check for value of k
            {
                possible = true;
                break;
            }
            if (k == 4 && a[i] % 2 == 0)// if first condition is not satisfied
            {
                even++;
            }
        }
        if (possible || (even >= 2))//even will be used when k=4 and it does not satisfy first condition
        {
            cout << "0" << endl;
        }

        else
        {
            switch (k)
            {
            case 2:
                cout << "1" << endl; //we need to make one odd to even
                break;
            case 3:
                for (int i = 0; i < n; i++)
                {
                    if (a[i] % 3 == 2) //this is checking if 3k+2 exists so that we have to make just one change
                    {
                        possible = true;
                        break;
                    }
                }
                if (possible)
                    cout << "1" << endl;
                else //as other conditions are checked only remainign is when we are bound to add 2
                    cout << "2" << endl;
                break;
            case 4:
                if (n != 1)
                {
                    if (even == 1)
                    {
                        cout << "1" << endl; //there is one even and we have to make one more even
                    }
                    else
                    {
                        for (int i = 0; i < n; i++)
                        {
                            if (4 - a[i] % 4 == 1) // checks if distance from 4 is 1 so we have to add only 1
                            {
                                possible = true;
                                break;
                            }
                        }
                        if (possible)
                            cout << "1" << endl;
                        else // we will make two odds even
                            cout << "2" << endl;
                    }
                }
                else
                {
                    //when there is only one element we outputs its distamce from 4
                    cout << (4 - a[0] % 4) << endl;
                }

                break;
            case 5:
                for (int i = 0; i < n; i++)
                {
                    if (min_distance > (5 - a[i] % 5))
                    {
                        min_distance = 5 - a[i] % 5; //will print distance from nearest multiple of 5
                    }
                }
                cout << min_distance << endl;
                break;
            }
        }
    }

    return 0;
}