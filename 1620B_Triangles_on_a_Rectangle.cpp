#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h;
        cin >> w >> h;
        //using long long in order to avoid integer overflow
        vector <long long> x1;
        vector <long long> x2;
        vector <long long> x3;
        vector <long long> x4;
        long long max_distance,max_area=0;
        int k1,k2,k3,k4;
        cin >> k1;
        int temp;
        int a = 0;
        for (int i = 0; i < k1; i++) // for taking input first line where y coordinate is 0
        {
            cin >> temp;
            x1.push_back(temp);
        }
        max_distance=x1.back()-x1.front(); //we will take difference between farthest points as the given points are sorted out in ascending order
        max_area=max(max_area,max_distance*h);

        cin >> k2;
        for (int i = 0; i < k2; i++) // for taking input second line where y coordinate is h
        {
            cin >> temp;
            x2.push_back(temp);
        }
        max_distance=x2.back()-x2.front(); //we will take difference between farthest points as the given points are sorted out in ascending order
        max_area=max(max_area,max_distance*h);
        cin >> k3;
        for (int i = 0; i < k3; i++) // for taking input third line where x coordinate is 0
        {
            cin >> temp;
            x3.push_back(temp);
        }
        max_distance=x3.back()-x3.front(); //we will take difference between farthest points as the given points are sorted out in ascending order
        max_area=max(max_area,max_distance*w);
        cin >> k4;
        for (int i = 0; i < k4; i++) // for taking input fourth line where x coordinate is w
        {
            cin >> temp;
            x4.push_back(temp);
        }
        max_distance=x4.back()-x4.front(); //we will take difference between farthest points as the given points are sorted out in ascending order
        max_area=max(max_area,max_distance*w);
        
        cout<<max_area<<endl;
    }
    return 0;
}
