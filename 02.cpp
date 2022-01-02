#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 0, 1, 2, 0, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0;
    // Here low acts as the place where the next zero would come.
    int high = n-1;
    // Here high acts as the place where the next two would come. [reverse]
    int mid = 0;
    // Here mid acts as the pointer which we use to traverse. 

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
            // If we get a zero, we place the zero at it's desired place and then update zero's next place by incrementing low.
            // we increment mid so that we can check the next element.
            continue;
        }
        if(arr[mid] == 1)
        {
            mid++;
            // Since there is no desired place for 1, we simply update mid so that we can check the next place.
            continue;
        }
        if(arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            // If we get a two, we place that two at it's desired place and then update two's next place by decrementing high.
            high--;
            // Here we don't update mid because we have to check the position for the number which we got by swapping from high.
            continue;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << '\n'; 
    
    return 0;
}