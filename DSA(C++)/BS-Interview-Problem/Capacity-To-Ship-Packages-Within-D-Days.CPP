#include <iostream>
using namespace std;

pair<int, int> findlimits(const int weights[], int n)
{
    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < weights[i])
        {
            max = weights[i];
        }
        sum += weights[i];
    }

    return {max, sum};
}

bool isPossibleSolution(const int weights[], int n, int days, int mid)
{
    int daysUsed = 1;
    int currentLoad = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentLoad + weights[i] <= mid)
        {
            currentLoad += weights[i];
        }
        else
        {
            daysUsed++;
            if (daysUsed > days)
            {
                return false;
            }
            currentLoad = weights[i];
        }
    }

    return true;
}
int minimumCapacityRequire(const int weights[], int n, int days)
{
    auto [low, high] = findlimits(weights, n);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        bool isPossible = isPossibleSolution(weights, n, days, mid);
        if (isPossible)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int main()
{
    // int weights[6] = {3, 2, 2, 4, 1, 4};
    // int n = 6;
    // int days = 3;

    // int weights[1] = {5};
    // int n = 1;
    // int days = 1;

    // int weights[3] = {3, 2, 4};
    // int n = 3;
    // int days = 5;

    int weights[6] = {3, 2, 2, 4, 1, 4};
    int n = 6;
    int days = 1;

    int Capacity = minimumCapacityRequire(weights, n, days);
    cout << "Capacity To Ship Packages Within " << days << "-Days :" << Capacity << endl;

    return 0;
}
