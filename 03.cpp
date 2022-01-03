#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(int stones[], int n)
{
    priority_queue<int> p;

    for (int i = 0; i < n; i++)
    {
        p.push(stones[i]);
    }

    int ans;

    while (true)
    {
        if (p.size() == 0)
        {
            ans = 0;
            break;
        }
        else if (p.size() == 1)
        {
            ans = p.top();
            break;
        }
        else
        {
            int a = p.top();
            p.pop();
            int b = p.top();
            p.pop();

            if (a != b)
            {
                p.push(max(a, b) - min(a, b));
            }
        }
    }

    return ans;
}

int main()
{
    int arr[] = {2,7,4,1,8,1};

    cout << lastStoneWeight(arr, sizeof(arr)/sizeof(arr[0])) << '\n';
    
    return 0;
}