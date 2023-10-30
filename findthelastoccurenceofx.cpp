#include <iostream>
using namespace std;

int findlastOccurenceofX(int array[], int size, int target)
{
    int lo = 0;
    int hi = size - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (array[mid] == target)
        {
            ans = mid;
            lo = mid + 1;
        }
        else if (array[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int array[] = {1, 2, 3, 3, 4, 4, 4, 4, 5};
    int size = sizeof(array) / sizeof(int);
    int target = 4;
    int result = findlastOccurenceofX(array, size, target);
    cout << result << endl;

    return 0;
}

// output - index -7