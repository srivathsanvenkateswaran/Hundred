#include <bits/stdc++.h>
using namespace std;

int maxSumSubArray(int arr[], int size)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<size; i++)
    {
        currSum += arr[i];

        if(maxSum < currSum)
        {
            maxSum = currSum;
        }

        if(currSum<0)
        {
            currSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(int);
    int maxS = maxSumSubArray(arr, n);
    cout << maxS << '\n';
    return 0;
}