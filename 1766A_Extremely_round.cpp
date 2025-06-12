#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;
        int count;
        
        //following block of code is not compatible with time complexity
        // if (a < 10)
        //     count = a;
        // else
        // {
        //     count = 9;
        //     for (int i = 10; i <= a; i++)
        //     {
        //         if (i%10==0 && i<100)
        //             count++;
        //         else if (i%100==0 && i<1000)
        //             count++;
        //         else if (i%1000==0 && i<10000)
        //             count++;
        //         else if (i%10000==0 && i<100000)
        //             count++;
        //         else if (i%100000==0 && i<1000000)
        //             count++;
        //     }
        // }

        //we will extract first digit and then count total number of digits that will be multiplied by 9 in order to get count of required type of numbers
        string s=to_string(a);
        int first_integer=s[0]-'0';
        //following is still not compatible to time complexity
        //int num=a;
        // while (num!=10) // this calculates total number of digits 
        // {
        //     num/=10;
        //     count++;
        // }
        count=(int)log10(a) + 1;
        int number=(9*(count-1)+first_integer);
        //we did  count-1 as we will exclude first integer
        cout<<number<<endl;
    }

    return 0;
}