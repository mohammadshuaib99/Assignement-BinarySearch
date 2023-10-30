#include <iostream>
using namespace std;

int totalNumberofOnes(int array[], int size, int target) {
    int lo = 0;
    int hi = size - 1;
    int firstOccurrence = -1;
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        
        if (array[mid] == target) {
            firstOccurrence = mid;
            hi = mid - 1;
        } else if (array[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    int count = 0;
    if (firstOccurrence != -1) {
        for (int i = firstOccurrence; i < size && array[i] == target; ++i) {
            count++;
        }
    }

    return count;
}

int main() {
    int array[] = {0, 0, 0, 0, 1, 1};
    int size = sizeof(array) / sizeof(int);
    int result = totalNumberofOnes(array, size, 1);
    cout << result << endl;
    return 0;
}
