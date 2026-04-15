#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 4, 45, 99};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        cout << "No second largest element";
    else
        cout << "Second largest: " << secondLargest;

    return 0;
}
