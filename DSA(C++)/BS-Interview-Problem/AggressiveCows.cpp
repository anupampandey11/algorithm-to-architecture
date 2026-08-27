#include <iostream>
#include <algorithm>

using namespace std;

bool isPossiblePosition(int stalls[], int n, int cows, int mid)
{
    int cow = 1;
    int lastPos = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cow++;
            if (cow == cows)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int maximumDistancePosible(int stalls[], int n, int cows)
{
    int low = 1;
    int high = stalls[n - 1] - stalls[0];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isPossiblePosition(stalls, n, cows, mid))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return high;
}

int main()
{
    int stalls[] = {8, 1, 4, 2, 9};
    int n = 5;
    sort(stalls, stalls + n);
    int cows = 3;

    if (cows > n)
    {
        return -1;
    }

    int MaximumDistance = maximumDistancePosible(stalls, n, cows);
    cout << MaximumDistance << endl;
    return 0;
}
