#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<long long> a(k);
        vector<long long> sum(k, 0);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
         
        vector<long long> pre_max(k);
        vector<long long> pre_sum(k);
        pre_max[k - 1] = a[0];
        for (int i = k - 2; i >= 0; i--)
        {
            pre_max[i] = max(pre_max[i + 1], a[k - i - 1]);
        }
        
        pre_sum[0]=0;
        for (int i = 1; i < k; i++)
        {
            pre_sum[i] = pre_sum[i - 1] + a[k - i]; 
        }
        
        for (int i = 0; i < k; i++)
        {
            sum[i] = pre_sum[i] + pre_max[i];
            cout << sum[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
